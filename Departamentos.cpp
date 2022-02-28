#include <iostream>
using namespace std;
class Departamento{
	private: int escoger;
		public:
			Departamento(int);
			void Datos();
};
Departamento::Departamento(int escoger1){
	escoger=escoger1;
}
void Departamento::Datos(){
	cout<<"Escoger el Departamentos donde naciste"<<endl;
	cout<<"1: Alta Verapaz"<<endl;
	cout<<"2: Baja Verapaz"<<endl;
	cout<<"3: Chimaltenango"<<endl;
	cout<<"4: Chiquimula"<<endl;
	cout<<"5: El Progreso"<<endl;
	cout<<"6: Escuintla"<<endl;
	cout<<"7: Departamento de Guatemala "<<endl;
	cout<<"8: Huehuetenango"<<endl;
	cout<<"9: Izabal "<<endl;
	cout<<"10: Jalapa"<<endl;
	cout<<"11: Jutiapa"<<endl;
	cout<<"12: Peten"<<endl;
	cout<<"13: Quetzaltenango"<<endl;
	cout<<"14: Quiche"<<endl;
	cout<<"15: Retalhuleu"<<endl;
	cout<<"16: Sacatepequez"<<endl;
	cout<<"17: San Marcos"<<endl;
	cout<<"18: Santa Rosa"<<endl;
	cout<<"19: Solola"<<endl;
	cout<<"20: Suchitepequez"<<endl;
	cout<<"21: Totonicapan"<<endl;
	cout<<"22: Zacapa"<<endl;
	cout<<"Cuales escoges: ";
	cin>>escoger;
	if(escoger==1){
		cout<<"Sabias esto del departamento"<<endl;
		cout<<"Cabecera: Coban"<<endl;
		cout<<"Subdivisiones: 17 municipios"<<endl;
		cout<<"Fundacion Admision: 4 de de noviembre de 1542"<<endl;
		cout<<"Altitud: 1316 ms.n.m"<<endl;
		cout<<"Poblacion en 2020: 1 328 668 habitantes"<<endl;
		cout<<"Gentilicio: Altaverapence"<<endl;
		cout<<"Codigo Posta: AV";
	}
	else{
		if(escoger==2){
			cout<<"Sabias esto del departamento"<<endl;
			cout<<"Cabecera: Salama"<<endl;
			cout<<"Region: Region ll o Norte"<<endl;
			cout<<"Sudvisiones: 8 municipios"<<endl;
			cout<<"Superficie: 3124 kilometro cuadrados"<<endl;
			cout<<"Clima: Templado,Frio"<<endl;
			cout<<"Poblacion: 327 886 habitantes"<<endl;
			cout<<"Gentilicio: Bajaverapence"<<endl;
			cout<<"Codigo Postal: 1500"<<endl;
		}
		else{
			if(escoger==3){
				cout<<"Sabias esto del departamento"<<endl;
				cout<<"Cabecera: Chimaltenango"<<endl;
				cout<<"Region: Region V (Central)"<<endl;
				cout<<"Sudvisiones: 16 municipios"<<endl;
				cout<<"Superficie: 1979 kilometro cuadrados"<<endl;
				cout<<"Clima: Templado,Frio"<<endl;
				cout<<"Poblacion: 733 338 habitantes"<<endl;
				cout<<"Gentilicio: Chimalteco"<<endl;
				cout<<"Codigo Postal: 04000"<<endl;
			}
			else{
				if(escoger==4){
					cout<<"Sabias esto del departamento"<<endl;
					cout<<"Cabecera: Chiquimula"<<endl;
					cout<<"Region: Region lll o Region Nororiental"<<endl;
					cout<<"Sudvisiones: 11 municipios"<<endl;
					cout<<"Superficie: 2376 kilometro cuadrados"<<endl;
					cout<<"Clima: Calido templado seco"<<endl;
					cout<<"Poblacion: 441 579 habitantes"<<endl;
					cout<<"Gentilicio: Chiquimulteco"<<endl;
					cout<<"Codigo Postal: 20000"<<endl;
				}
				else{
					if(escoger==5){
						cout<<"Sabias esto del departamento"<<endl;
						cout<<"Cabecera: Guastatoya"<<endl;
						cout<<"Region: Region lll o Norte"<<endl;
						cout<<"Sudvisiones: 8 municipios"<<endl;
						cout<<"Superficie: 1922 kilometro cuadrados"<<endl;
						cout<<"Clima: Calido"<<endl;
						cout<<"Poblacion: 193 079 habitantes"<<endl;
						cout<<"Gentilicio: Progreseño"<<endl;
						cout<<"Codigo Postal: PRO"<<endl;
					}
					else{
						if(escoger==6){
							cout<<"Sabias esto del departamento"<<endl;
							cout<<"Cabecera: Escuintla"<<endl;
							cout<<"Region: Region V o Central Sur"<<endl;
							cout<<"Sudvisiones: 14 municipios"<<endl;
							cout<<"Superficie: 4384 kilometro cuadrados"<<endl;
							cout<<"Clima: Tropical, con dos variantes: Tropical del Sabana y Tropical Subecuatorial"<<endl;
							cout<<"Poblacion: 791 639 habitantes"<<endl;
							cout<<"Gentilicio: Escuintleco"<<endl;
							cout<<"Codigo Postal: 05000"<<endl;
						}
						else{
							if(escoger==7){
								cout<<"Sabias esto del departamento"<<endl;
								cout<<"Cabecera: Ciudad de Guatemala"<<endl;
								cout<<"Region: Region l o Metropolitana"<<endl;
								cout<<"Sudvisiones: 17 municipios"<<endl;
								cout<<"Superficie: 2253 kilometro cuadrados"<<endl;
								cout<<"Clima: Templado"<<endl;
								cout<<"Poblacion: 5 103 685 habitantes"<<endl;
								cout<<"Gentilicio: guatemalteco,guatemalteca"<<endl;
								cout<<"Codigo Postal: GUA"<<endl;
							}
							else{
								if(escoger==8){
									cout<<"Sabias esto del departamento"<<endl;
									cout<<"Cabecera: Huehuetenango"<<endl;
									cout<<"Region: Region Vll o Noroccidental"<<endl;
									cout<<"Sudvisiones: 33 municipios"<<endl;
									cout<<"Superficie: 7400 kilometro cuadrados"<<endl;
									cout<<"Clima: Templado,Frio"<<endl;
									cout<<"Poblacion: 1 371 676 habitantes"<<endl;
									cout<<"Gentilicio: Huehueteco"<<endl;
									cout<<"Codigo Postal: HUE"<<endl;
								}
								else{
									if(escoger==9){
										cout<<"Sabias esto del departamento"<<endl;
										cout<<"Cabecera: Puerto Barrios"<<endl;
										cout<<"Region: Region lll o Nororiental"<<endl;
										cout<<"Sudvisiones: 5 municipios"<<endl;
										cout<<"Superficie: 9038 kilometro cuadrados"<<endl;
										cout<<"Clima: Calido, Tropical"<<endl;
										cout<<"Poblacion: 440 495 habitantes"<<endl;
										cout<<"Gentilicio: Izabalense"<<endl;
										cout<<"Codigo Postal: 18000"<<endl;
									}
									else{
										if(escoger==10){
											cout<<"Sabias esto del departamento"<<endl;
											cout<<"Cabecera: Jalapa"<<endl;
											cout<<"Region: Region lV o Suroriental"<<endl;
											cout<<"Sudvisiones: 7 municipios"<<endl;
											cout<<"Superficie: 2063 kilometro cuadrados"<<endl;
											cout<<"Clima: Calido"<<endl;
											cout<<"Poblacion: 394 234 habitantes"<<endl;
											cout<<"Gentilicio: Jalapaneco"<<endl;
											cout<<"Codigo Postal: JAL Y 21000"<<endl;
										}
										else{
											if(escoger==11){
												cout<<"Sabias esto del departamento"<<endl;
												cout<<"Cabecera: Jutiapa"<<endl;
												cout<<"Region: Region lV o Suroriental"<<endl;
												cout<<"Sudvisiones: 17 municipios"<<endl;
												cout<<"Superficie: 3216 kilometro cuadrados"<<endl;
												cout<<"Clima: Calido, Templado"<<endl;
												cout<<"Poblacion: 546 005 habitantes"<<endl;
												cout<<"Gentilicio: Jutiapaneco/a"<<endl;
												cout<<"Codigo Postal: 22000"<<endl;
											}
											else{
												if(escoger==12){
													cout<<"Sabias esto del departamento"<<endl;
													cout<<"Cabecera: Flores"<<endl;
													cout<<"Region: Region lll o Peten"<<endl;
													cout<<"Sudvisiones: 14 municipios"<<endl;
													cout<<"Superficie: 35 854 kilometro cuadrados"<<endl;
													cout<<"Clima: Calido Tropical"<<endl;
													cout<<"Poblacion: 613 475 habitantes"<<endl;
													cout<<"Gentilicio: Petenero,Petenera"<<endl;
													cout<<"Codigo Postal: 17000"<<endl;
												}
												else{
													if(escoger==13){
														cout<<"Sabias esto del departamento"<<endl;
														cout<<"Cabecera: Quetzaltenango"<<endl;
														cout<<"Region: Region Vl o Suroccidental"<<endl;
														cout<<"Fundacion: 1845"<<endl;
														cout<<"Superficie: 1953 kilometro cuadrados"<<endl;
														cout<<"Clima: Templado,Frio"<<endl;
														cout<<"Poblacion: 894 402 habitantes"<<endl;
														cout<<"Gentilicio: Quetzaltetico/a"<<endl;
														cout<<"Himno: Luna de Xelaju"<<endl;
													}
													else{
														if(escoger==14){
															cout<<"Sabias esto del departamento"<<endl;
															cout<<"Cabecera: Santa Cru< del Quiche"<<endl;
															cout<<"Region: Region Vll o Noroccidental"<<endl;
															cout<<"Sudvisiones: 21 municipios"<<endl;
															cout<<"Superficie: 8378 kilometro cuadrados"<<endl;
															cout<<"Puesto: 4 de 22"<<endl;
															cout<<"Poblacion: 1 062 897 habitantes"<<endl;
															cout<<"Creacion: 1825"<<endl;
															cout<<"Codigo Postal: 14000"<<endl;
														}
														else{
															if(escoger==15){
																cout<<"Sabias esto del departamento"<<endl;
																cout<<"Cabecera: Retalhuleu"<<endl;
																cout<<"Region: Region Vl o Suroccidental"<<endl;
																cout<<"Puesto: 19 de 22"<<endl;
																cout<<"Superficie: 1856 kilometro cuadrados"<<endl;
																cout<<"Clima: Calido"<<endl;
																cout<<"Poblacion: 371 072 habitantes"<<endl;
																cout<<"Gentilicio: retalteco/a"<<endl;
																cout<<"Codigo Postal: 11000"<<endl;
															}
															else{
																if(escoger==16){
																	cout<<"Sabias esto del departamento"<<endl;
																	cout<<"Cabecera: Antigua Guatemala"<<endl;
																	cout<<"Region: Region V o Central"<<endl;
																	cout<<"Fundacion: 1839"<<endl;
																	cout<<"Superficie: 465 kilometro cuadrados"<<endl;
																	cout<<"Clima: Templado"<<endl;
																	cout<<"Poblacion: 389 911 habitantes"<<endl;
																	cout<<"Gentilicio: Antigueño/a"<<endl;
																	cout<<"Codigo Postal: 03000"<<endl;
																}
																else{
																	if(escoger==17){
																		cout<<"Sabias esto del departamento"<<endl;
																		cout<<"Cabecera: San Marcos"<<endl;
																		cout<<"Region: Region Vl o Suroccidental"<<endl;
																		cout<<"Sudvisiones: 30 municipios"<<endl;
																		cout<<"Superficie: 3791 kilometro cuadrados"<<endl;
																		cout<<"Clima: Templado,Frio"<<endl;
																		cout<<"Poblacion: 1 172 210 habitantes"<<endl;
																		cout<<"Gentilicio: Marquense"<<endl;
																		cout<<"Codigo Postal: 12000"<<endl;
																	}
																	else{
																		if(escoger==18){
																			cout<<"Sabias esto del departamento"<<endl;
																			cout<<"Cabecera: Cuilapa"<<endl;
																			cout<<"Region: Region lV Sur Oriental"<<endl;
																			cout<<"Sudvisiones: 14 municipios"<<endl;
																			cout<<"Superficie: 2955 kilometro cuadrados"<<endl;
																			cout<<"Clima: Calido, Arido y templado frio"<<endl;
																			cout<<"Poblacion: 441 032 habitantes"<<endl;
																			cout<<"Gentilicio: Santaroseño/a"<<endl;
																			cout<<"Codigo Postal: 06000"<<endl;
																		}
																		else{
																			if(escoger==19){
																				cout<<"Sabias esto del departamento"<<endl;
																				cout<<"Cabecera: Solola"<<endl;
																				cout<<"Region: Region Vl o Suroccidental"<<endl;
																				cout<<"Sudvisiones: 19 municipios"<<endl;
																				cout<<"Superficie: 1 061 kilometro cuadrados"<<endl;
																				cout<<"Clima: Frio"<<endl;
																				cout<<"Poblacion: 467 266 habitantes"<<endl;
																				cout<<"Gentilicio: Sololateco"<<endl;
																				cout<<"Codigo Postal: 07000"<<endl;
																			}
																			else{
																				if(escoger==20){
																					cout<<"Sabias esto del departamento"<<endl;
																					cout<<"Cabecera: Mazatenango"<<endl;
																					cout<<"Region: Region Vl o Suroccidental"<<endl;
																					cout<<"Idioma oficial: Español, Xinca"<<endl;
																					cout<<"Superficie: 2510 kilometro cuadrados"<<endl;
																					cout<<"Clima: Calido"<<endl;
																					cout<<"Poblacion: 605 299 habitantes"<<endl;
																					cout<<"Gentilicio: Mazateco/a"<<endl;
																					cout<<"Fundacion: 1838"<<endl;
																				}
																				else{
																					if(escoger==21){
																						cout<<"Sabias esto del departamento"<<endl;
																						cout<<"Cabecera: Totonicapan"<<endl;
																						cout<<"Region: Region Vl o Suroccidental"<<endl;
																						cout<<"Puesto: 12 de 22"<<endl;
																						cout<<"Superficie: 1061 kilometro cuadrados"<<endl;
																						cout<<"Clima: Frio"<<endl;
																						cout<<"Poblacion: 486 687 habitantes"<<endl;
																						cout<<"Gentilicio: Totonicapense"<<endl;
																						cout<<"Codigo Postal: 08000"<<endl;
																					}
																					else{
																						if(escoger==22){
																							cout<<"Sabias esto del departamento"<<endl;
																							cout<<"Cabecera: Zacapa"<<endl;
																							cout<<"Region: Region lll o Nororiental"<<endl;
																							cout<<"Sudvisiones: 11 municipios"<<endl;
																							cout<<"Superficie: 2690 kilometro cuadrados"<<endl;
																							cout<<"Clima: Calido"<<endl;
																							cout<<"Poblacion: 270 473 habitantes"<<endl;
																							cout<<"Gentilicio: Zacapaneco"<<endl;
																							cout<<"Codigo Postal: 19000"<<endl;
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
							}
						}
					}
				}
			}
		}
	}
}

//int main(){
//	int escoger1;
//	Departamento Mostrar(escoger1);
//	Mostrar.Datos();
//}
