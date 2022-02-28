#include "calculadora.cpp"
#include "indeficar si es par o impar.cpp"
#include "Convertidor de longitud.cpp"
#include "Si es palindromo o no.cpp"
#include "Convertirdo de de numeros arabigos a romanos.cpp"
#include "Conversión de números enteros a letras.cpp"
#include "Conversión de números enteros con decimal a letras.cpp"
#include "Tabla de multiplicar.cpp"
#include "Toda las tablas de multiplicar.cpp"
#include "Crear de forma gráfica la multiplicación manual.cpp"
#include "Conversión de números decimales a binario.cpp"
#include "Conversión de números decimales a hexadecimales.cpp"
#include "Cajero.cpp"
#include "Hipotenusa.cpp"
#include "Descuento_Producto.cpp"
#include "Generacion.cpp"
#include "Temporizador.cpp"
#include "Departamentos.cpp"
int main(){
	int eleccion;
	cout<<"Universdiad Mariano Galvez de Guatemala"<<endl;
	cout<<"Ingenieria en Sistemas de Informacion y Ciencias de la Computacion"<<endl;
	cout<<"Curso: Programacion"<<endl;
	cout<<"Docente: ARMANDO CARDONA PAIZ"<<endl<<endl;
	cout<<"Buenas tarde ingeniero aqui le presento mi menu sencillo pero parte de entender"<<endl; 
	cout<<"espero sea de su agrado, que pase una feliz tarde"<<endl<<endl;
	cout<<"Cual quieres hacer:"<<endl;
	cout<<"1: Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
	cout<<"2: Determinar si un numero es par o impar"<<endl;
	cout<<"3: Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4: Determinar si una palabra o un numero es palindromo."<<endl;
	cout<<"5: Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
	cout<<"6: Conversion de numeros enteros a letras"<<endl;
	cout<<"7: Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8: Una tabla de multiplicar"<<endl;
	cout<<"9: Todas las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"10: Crear de forma grafica la multiplicacion manual"<<endl;
	cout<<"11: Conversion de numeros decimales a binario"<<endl;
	cout<<"12: Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13: Crear Figuras Geometricas Basicas."<<endl;
	cout<<"14: Mover un punto en toda la pantalla"<<endl;
	cout<<"15: Simulacion de un Cajero (Automata)"<<endl;
	cout<<"16: Calcular la hipotenusa";
	cout<<"17: Departamentos de Guatemala"<<endl;
	cout<<"18: Temporizador"<<endl;
	cout<<"19: Fecha de nacimiento"<<endl;
	cout<<"20: Descuento en producto"<<endl;
	cout<<"Cual es tu eleccion: ";
	cin>>eleccion;
	cout<<""<<endl;
	
	if(eleccion==1){
		int primero=0;
		int segundo=0;
		int decision=0;
		cout<<"Que quieres hacer"<<endl;
		cout<<"Suma = 1"<<endl;
		cout<<"Resta = 2"<<endl;
		cout<<"Multiplicacion = 3"<<endl;
		cout<<"Division = 4"<<endl;
		cout<<"Respuesta:";
		cin>>decision;
	
		if(decision==1){
			cout<<"Ingresa tu primer numero: ";
			cin>>primero;
			cout<<"Ingresa tu segundo numero: ";
			cin>>segundo;
			Calculadora sum(primero,segundo);
			sum.suma();
		}
		else{
			if(decision==2){
				cout<<"Ingresa tu primer numero: ";
				cin>>primero;
				cout<<"Ingresa tu segundo numero: ";
				cin>>segundo;
				Calculadora rest(primero,segundo);
				rest.resta();
			}
			else{
				if(decision==3){
				cout<<"Ingresa tu primer numero: ";
				cin>>primero;
				cout<<"Ingresa tu segundo numero: ";
				cin>>segundo;
				Calculadora multi(primero,segundo);
				multi.multiplicar();
				}
				else{
					if(decision==4){
					cout<<"Ingresa tu primer numero: ";
					cin>>primero;
					cout<<"Ingresa tu segundo numero: ";
					cin>>segundo;
					Calculadora divis(primero,segundo);
					divis.dividir();
						}
					}
				}
			}
		}
		else{
			if(eleccion==2){
				int numerof;
				cout<<"Conocer si tu numero es par o impar"<<endl;
				cout<<"Ingresa tu numero: ";
				cin>>numerof;
				Identificar num(numerof);
				num.conocedor();
			}
			else{
				if(eleccion==3){
					float numeror;
					int cuantos;
					int eleccion;
					cout<<"Convierte tus unidades de longitud a"<<endl;
					cout<<"1: kilometro a milla"<<endl;
					cout<<"2: metro a pulgada"<<endl;
					cout<<"3: libra a kilo"<<endl;
					cout<<"4: Milla a Kilometro"<<endl;
					cout<<"5: Pulgada a Metro"<<endl;
					cout<<"6: Kilo a libra"<<endl;
					cout<<"Cual es tu eleccion:";
					cin>> eleccion;
					cout<<"Cuantas conversiones quieres hacer: ";
					cin>>cuantos;
					for(int k;k<cuantos;k++){
						eleccion==eleccion;
						if(eleccion==1){
							cout<<"Ingresa tu numero: ";
							cin>>numeror;
							Convertidor kilometro_milla(numeror);
							kilometro_milla.kilometro_a_milla();
							}
							else{
								if(eleccion==2){
									cout<<"Ingresa tu numero: ";
									cin>>numeror;
									Convertidor metro_pulgada(numeror);
									metro_pulgada.metro_a_pulgada();
								}
								if(eleccion==3){
									cout<<"Ingresa tu numero: ";
									cin>>numeror;
									Convertidor libra_kilo(numeror);
									libra_kilo.libra_a_kilo();
								}
								else{
									if(eleccion==4){
										cout<<"Ingrese tu numero: ";
										cin>>numeror;
										Convertidor milla_kilometro(numeror);
										milla_kilometro.milla_a_kilometro();
									}
									else{
										if(eleccion==5){
											cout<<"Ingrea tu numero: ";
											cin>>numeror;
											Convertidor pulgada_metro(numeror);
											pulgada_metro.pulgada_a_metro();
										}
										else{
											if(eleccion==6){
												cout<<"Ingresa tu numero: ";
												cin>>numeror;
												Convertidor kilo_libra(numeror);
												kilo_libra.kilo_a_libra();
											}
										}
									}
								}
							}
						}
							cout<<"Quieres cambiar: ";
							cin>>eleccion;
						}
					}
				}
				if(eleccion==4){
					string ingresa;
					string salida;
					cout<<"Ingresa la palabra o numero que deseas saber si es palindroma: ";
					cin>>ingresa;
					Palindromo verificar(ingresa,salida);
					verificar.verificar();
				}
				else{
					if(eleccion==5){
						int ingresar=0;
						cout<<"Ingresa el numero que quiere pasar a romanos: ";
						cin>>ingresar;
						cout<<"El resultado de la operacion es: ";
						Araarom convert(ingresar);
						convert.conversion();
					}
					else{
						if(eleccion==6){
							int ingresar;
							Numletra final(ingresar);
							final.convertir();
							cin.ignore();return 0;
						}
					}
					if(eleccion==7){
						int ingresar;
						int regresar;
						Numeroconletra final(ingresar);
						final.convertir();
						Numeroconletra final2(regresar);
						final2.decimal();
						cin.ignore();return 0;	
					}
					else{
						if(eleccion==8){
							int ingresa;
							Tabla resultado(ingresa);
							resultado.operacion();
							return 0;
							}
							else{
								if(eleccion==9){
									int unof=1;
									Todatabla fin1(unof);
									fin1.operacion();
								}
								else{
									if(eleccion==10){
										int num1f,num2f,num3f,num4f;
										Grafica final(num1f, num2f, num3f, num4f);
										final.operar();
									}
									else{
										if(eleccion==11){
											int ingresaar;
											Numeroabinario Prueba(ingresaar);
											Prueba.operacion();
										}
										else{
											if(eleccion==12){
												int final;
												Numahexa probando(final);
												probando.resultado();
											}
											else{
												if(eleccion==13){
													cout<<"Usar el programa original tuve error al momento de copiarlo perdone";
												}
												else{
													if(eleccion==14){
														cout<<"Tuve error por la funcion gotoxy que la utilice dos veces y la esta confudiendo con la numero 10.";
													}
													else{
														if(eleccion==15){
															int elec;
															string nomf;
															string apef;
															string nada;
															string nac;
															string usua;
															string contra;	
															Cajero cajero(elec,nomf,apef,nada,nac,usua,contra);
															cajero.operar();	
															return 0;
														}
														else{
															if(eleccion==16){
																float x2;
																float y2;
																Calculohipo Hipotenusa(x2,y2);
																Hipotenusa.hipotenusa();
															}
															else{
																if(eleccion==17){
																	float total;
																	float descuento;
																	Descuentocompra Pagar(total,descuento);
																	Pagar.Producto();
																}
																else{
																	if(eleccion==18){
																		int ingresa;
																		Generacion Ayos(ingresa);
																		Ayos.Resultado();
																	}
																	else{
																		if(eleccion==19){
																		int maxsegundo;
																		int segundo2;
																		int maxminuto;
																		int minuto2;
																		Temporizador Tiempo(maxsegundo,segundo2,maxminuto,minuto2);
																		Tiempo.reloj();
																		}
																		else{
																			if(eleccion==20){
																				int escoger1;
																				Departamento Mostrar(escoger1);
																				Mostrar.Datos();
																			}
																		}
																	}
																}
															}
														}
													}
												}

											}
										}
									}
								}
							}
					}
				}

	

		
	
	
	return 0;
}
