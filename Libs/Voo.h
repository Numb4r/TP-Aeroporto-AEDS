typedef struct DadoVoo{
  int VID;
  int Hora_Decola;
  int Minuto_Decola;     //Variaveis para numero do Voo,Horario de decolagem,Horario de pouso,Horario previsto e numero da pista.
  int Hora_Previsto;
  int Minuto_Previsto;
  int Pista;
  char Aeroporto_Partida[30];
  char Aeroporto_Chegada[30];
} Voo;
void InicializaVoo(Voo* Modelo);
void SetVID(Voo* Modelo);  //Variaveis declaradas para atribuições dentro da struct.
void SetHora_Minuto_Decola(Voo* Modelo);
void SetHora_Minuto_Previsto(Voo* Modelo);
void SetPista(Voo* Modelo);
void SetAeroporto_Partida(Voo* Modelo);
void SetAeroporto_Chegada(Voo* Modelo);
void GetVID(Voo Modelo);
void GetHora_Minuto_Decola(Voo Modelo);
void GetHora_Minuto_Previsto(Voo Modelo);
void GetPista(Voo Modelo);
void GetAeroporto_Partida(Voo Modelo);
void GetAeroporto_Chegada(Voo Modelo);
