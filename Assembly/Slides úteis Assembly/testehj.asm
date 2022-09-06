.MODEL SMALL          ;hello world sem repeti??o
;mov ? utilizado para mover valores na mem?ria
.data
    msg db 'Ola, mundo :)',10,'$'
.CODE
    main proc
        mov ax,@data       ;inicializa??o do ds
        mov ds,ax         
        mov ah,09h     ;fun??o 09 da int 21 - escreve a string  
        lea dx,msg     
        int 21h
        mov ah,4ch
        int 21h
main endp
end main
