.model small

.code
    main proc
    
    mov ah, 02  ;ativa a fun??o
    mov dl, 97  ; move para o dl o c?digo ascii da leta A (min?scula)
    

volta:
    int 21h     ;imprime a letra
    inc dl      ;incrementa o dl
    mov bl,dl   ;passa a informa??o do dl para o bl
    
    mov dl, 32  ;registra a barra de espa?o no dl
    int 21h     ;imprime a barra de espa?o
    
    mov dl, bl  ;recupera a informa??o de bl, passando para o dl
    int 21h     ;imprime a informa??o
    
    inc dl      ;incrementa o dl
    mov bl, dl  ;guarda a informa??o em bl
    
    mov dl, 10  ;registra o enter no dl
    int 21h     ;imprime o enter
    
    mov dl,bl   ;recupera a informa??o
    cmp dl, 121 ;observa se o dl ? 121
    jle volta  ;se o dl ? menor que 121, volta e repete o loop
    mov ah,4ch ;sai do programa
    int 21h
    
main endp 
end main