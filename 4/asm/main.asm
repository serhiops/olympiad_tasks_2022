;flat assembler  version 1.73.30
format PE Console 4.0

entry start

include 'win32a.inc'

section '.data' data readable writable
    
    coins rd 1 
    shipboys rd 1 
    sailors rd 1 
    cannoneers rd 1 
    captains_assistants rd 1
    min_pay rd 1
    
    total rd 1
    
    printD db '%d ',0
    scandD db '%d %d %d %d %d',0
    
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
    invoke scanf,scandD, coins, shipboys, sailors, cannoneers, captains_assistants 
    
    rol [sailors], 1
    rol [cannoneers], 2
    rol [captains_assistants], 3
    
    mov ecx, [shipboys]
    add ecx, [sailors]
    add ecx, [cannoneers]
    add ecx, [captains_assistants]
    add ecx, 24
    mov [total], ecx
    
    mov edx, 0
    mov eax, [coins]
    div ecx
    mov [min_pay], eax
    mov eax, [min_pay]

    invoke printf, printD, [min_pay]
    
    rol [min_pay], 1
    invoke printf, printD, [min_pay]
    
    rol [min_pay], 1
    invoke printf, printD, [min_pay]
    
    rol [min_pay], 1
    invoke printf, printD, [min_pay]
    
    mov edx, 0
    mov eax, [coins]
    div [total]
    mul [total]
    mov ecx, eax 
    mov eax, [coins]
    sub eax, ecx
    add eax, [min_pay]
    invoke printf, printD, eax
    
    rol [min_pay], 1
    invoke printf, printD, [min_pay]
    
    invoke getch
    invoke ExitProcess, NULL
