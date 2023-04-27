global    main
          extern    printf
main:
	  mov   edi, message
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
message: db `Hello, Holberton\n`,0

