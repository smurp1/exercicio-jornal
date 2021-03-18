#include "jornal.h"




void jornal::inicializarsprite()
{
	if (!gRecursos.carregouSpriteSheet("templatejornal"))
	{
		gRecursos.carregarSpriteSheet("templatejornal", "/assets/assets/JornalTemplate.png", 1, 1);
		jornal.setSpriteSheet("templatejornal");
	}
}

void jornal::inicializardados()
{

	titulo.setFonte("fonte");
	titulo.setString("titulo");
	titulo.setCor(0, 0, 0);
	titulo.setEscala(5, 5);

	texto.setFonte("fonte");
	texto.setString("texto texto texto texto texto texto texto texto texto texto texto");
	texto.setCor(0, 0, 0);
	texto.setEscala(2, 2);
	texto.setLarguraMaxima(100);

	nome.setFonte("fonte");
	nome.setString("nome");
	nome.setCor(0, 0, 0);
	nome.setEscala(5, 5);

	data.setFonte("Fonte");
	data.setString("29 de fevereiro de 20000");
	data.setCor(0, 0, 0);
	data.setEscala(3, 3);

	site.setFonte("fonte");
	site.setString("site.com");
	site.setCor(0, 0, 0);
	site.setEscala(3, 3);
}

void jornal::desenharjornal()
{
	jornal.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
}

void jornal::desenharmateria()
{
	titulo.desenhar(200, 100);
	texto.desenhar(50, 200);
	data.desenhar(200, 50);
	site.desenhar(10, 10);
	nome.desenhar(10, 50);
}
