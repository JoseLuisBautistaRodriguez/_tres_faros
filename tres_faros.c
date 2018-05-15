#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

	void main()
	{
		long int var_a = 3 , var_b = 4  , var_c = 5 , contador = 0 , var_pa , var_pb , var_pc ;
		bool restriccion_a = false , restriccion_b = false, restriccion_c = false, seguro_1 = false, seguro_2 = false ; 

		do{

			contador++;
			//printf("%i ", contador);
			if( (contador % var_a ) == 0 && (contador % var_b ) == 0 && (contador % var_c ) == 0 )
			{
				var_pa = contador/var_a;
				var_pb = contador/var_b;
				var_pc = contador/var_c;

				if ( seguro_1 == false )if ( ( var_pa % 2 ) == 0 )
				{
					if ( ( var_pb % 2 ) == 0 ) 
					{
						if ( ( var_pc % 2 ) == 0) 
						{
							restriccion_a = true;
							printf("\n\t El numero de iteraciones fue %i para que todos los faros se prendan al mismo tiempo. \n ", contador );
							seguro_1 = true ;
						}
					}
	
				} 

				if ( seguro_2 == false ) if ( ( var_pa % 2 ) != 0 )
				{
					if ( ( var_pb % 2 ) != 0 ) 
					{
						if ( ( var_pc % 2 ) != 0) 
						{
							printf("\n\t El numero de iteraciones para que se apaguen al mismo tiempo fue de %i .\n", contador );
							restriccion_b = true;
							seguro_2 = true  ;
						}
					}
	
				} 

				if ( contador > 2100000000 )
				{
					restriccion_a = true;
					restriccion_b = true;

					if ( restriccion_a == true && restriccion_b == true ) restriccion_c = true;

					printf("\n\t Se lleno el espacio en memoria.\n");
					system("pause");
				}

			}

		}while( restriccion_c != true );
		
		printf("\n\t Termino el programa.\n");
		//system("pause");
	}
