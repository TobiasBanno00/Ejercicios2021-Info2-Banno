#include <stdio.h>
#include <stdint.h>

struct producto                     //Estructura 
{
	uint32_t codigo;           //codigo producto
	uint16_t precio;           //precio producto
	char descripcion[25];        //nombre producto
	
} productosCargados,*ptrProductos;


void guardarProductosArchivo(void);
void cargarProducto(void);
void lecturaProductoArchivo(void);

int main(){
	int opciones;
	
	while (1)
	{
		printf(" Preciona: \n -1 si quiere cargar un producto\n -2 si quiere el listado de productos cargados\n -3 si quiere salir\n ");
		scanf("%d", &opciones);
		
		switch (opciones)
		{
		case 1:
			cargarProducto();
			break;
			
		case 2:
			lecturaProductoArchivo();
			break;
			
		case 3:
			return 0;
			break;
			
		}
	}
}
	
	void guardarProductosArchivo(void)
	{
		ptrProductos=&productosCargados;
		FILE *productos;                       //declaración puntero archivo
		productos=fopen("productos.dat","a");    // abrimos/creamos un archivo.dat y escribimos abajo
		
		if(productos == NULL) {
			printf("Error al abrir archivo!");
		}
		
		fwrite(ptrProductos, sizeof(struct producto), 1, productos);        //guardamos la estructura en el archivo.dat
		fclose(productos);                                    //cerramos el archivo escrito
	}
	
	void cargarProducto(void)
	{
		printf(" --------------------------------------\n ");
		printf(" Ingrese el codigo del producto a cargar: ");
		scanf("%ld", &productosCargados.codigo);
		printf(" --------------------------------------\n ");
		printf(" Ingrese el nombre del producto a cargar: ");
		gets(productosCargados.descripcion);
		printf(" --------------------------------------\n ");
		printf(" Ingrese el precio del producto a cargar: ");
		scanf("%d", &productosCargados.precio);
		printf(" --------------------------------------\n ");
		guardarProductosArchivo();
	}
	
	void lecturaProductoArchivo(void)
	{
		ptrProductos=&productosCargados;
		FILE *productos;                       //declaración puntero archivo
		productos=fopen("productos.dat","r");    // leemos un archivo.dat
		
		if(productos == NULL) {
			printf("Error al abrir archivo!");
		}
		
		fread(ptrProductos, sizeof(struct producto), 1, productos);        //guardamos lo leido en nuestra estructura ya creada
		fclose(productos);                                                 //cerramos el archivo escrito
		
		printf("CODIGO : %ld, NOMBRE: %s, PRECIO: %d \n",productosCargados.codigo,productosCargados.descripcion,productosCargados.precio);
		
	}
	