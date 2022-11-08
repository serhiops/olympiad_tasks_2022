;flat assembler  version 1.73.30
format PE Console 4.0

include 'win32a.inc'

entry start

section '.data' data readable writable
    
    boxes rd 1
    cases rd 1
    cartridges_in_cases rd 1
    guns rd 1
    cartridges_in_store rd 1
    
    total_cartridges  rd 1
    full_stores rd 1
    remainder_stores  rd 1

    printD db '%d',0
    resultStr db '%d %d %d',0
    scanStr db '%d %d %d %d %d',0
    
    NULL = 0
    
section '.idata' import data writable
    
    library kernel, 'kernel32.dll',\
            msvcrt, 'msvcrt.dll'

    import kernel,\
        ExitProcess, 'ExitProcess'
        
    import msvcrt,\
        printf, 'printf',\
        scanf, 'scanf',\
        getch, '_getch'
    

section '.code' code readable executable
start:
    invoke scanf,scanStr, boxes, cases, cartridges_in_cases, guns, cartridges_in_store 
    
    ;умножение присваивание переменной total
    mov  eax,[boxes]
    mul  [cases]
    mul  [cartridges_in_cases]
    
    mov  [total_cartridges], eax
    
    ;ищем количество полных магазинов для каждого автомата
    mov  edx, 0
    div  [guns]
    mov  edx, 0
    div  [cartridges_in_store]
    mov  [full_stores], eax
    
    ;ищем остаток полных магазинов (в eax уже лежит значение full_stores)
    mul  [guns]
    mul  [cartridges_in_store]
    
    sub  eax, [total_cartridges]
    neg  eax
    mov  ecx, eax
    mov  edx, 0
    div  [cartridges_in_store]
    mov  [remainder_stores], eax
    
    ;ищем остаток патронов
    mul [cartridges_in_store]
    mov [total_cartridges], eax
    sub ecx,[total_cartridges] 
    
    invoke printf,resultStr,[full_stores],[remainder_stores], ecx  
    
    invoke getch
    invoke ExitProcess, NULL            