.MODEL SMALL
.CODE
    main proc
    mov ah,1     ;fun??o que faz leitura de caracteres
    int 21h      ;
    sub al, 30h  ;transforma em um leitor de digitos, n?o de caracteres
    mov dl,al    ;move o valor para dl
    
    int 21h  
    sub al, 30h  ;chama a fun??o de "leitura de digitos'
    
    mov ah, 09h
    
    add dl, al   ;faz a soma
    
    add dl, 30h  ;soma novamente
    mov ah, 02   ;escreve o "digito'
    int 21h
    
    mov ah, 4ch  ;finaliza o c?digo
    int 21h
main endp
end main