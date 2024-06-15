package com.desafio2.desafio;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

import java.util.Random;
import java.util.Scanner;


@SpringBootApplication
public class DesafioApplication {

	public static void main(String[] args) {
		SpringApplication.run(DesafioApplication.class, args);
		numeroAleatorio();
	}
    
	public static void numeroAleatorio(){

	    Scanner scanner = new Scanner(System.in);
		Random random = new Random();


		// Gerando um número aleatório inteiro entre 0 e 99
		int numeroAleatorio = random.nextInt(100);
		System.out.println("Teste numero:" + numeroAleatorio);

		int numeroDigitado = 0;

		
			System.out.println("Temte a sorte digite um numero de 0 - 100:");
			numeroDigitado = scanner.nextInt();

		do {

			if(numeroDigitado > numeroAleatorio){
				System.out.println("digite um numero um pouco menor:");
				numeroDigitado = scanner.nextInt();
			}else if(numeroDigitado < numeroAleatorio){
				System.out.println("digite um numero um pouco maior:");
				numeroDigitado = scanner.nextInt();
			}else{
				System.out.println("parabens voce acertou");				
			}

		} while(numeroAleatorio != numeroDigitado);
		 
		scanner.close();
	
	}

}
