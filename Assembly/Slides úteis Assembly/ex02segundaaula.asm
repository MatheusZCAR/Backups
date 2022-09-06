.MODEL SMALL
.DATA
    STRI db 10, '$$$$$$$$$$$$$'
.CODE
    main proc
    
    mov ax,@DATA    ;inicializa??o de DS
    mov ds, ax      ;destino <---- origem
    mov ah, 0Ah     ;fun??o 0Ah funciona como um scanf para str
    mov dx, offset STRI
    int 21h
    mov ah, 02  ;fun??o 02 imprime 
    mov dl, 10
    int 21h
    mov ah, 09              ;fun??o para escrever string
    mov dx, offset STRI     ;endere?o inicial da str
    add dx, 02
    int 21h
    mov ah, 4Ch           ;exit
    int 21h
   
   main endp
  end main