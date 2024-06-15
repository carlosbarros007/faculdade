package com.aulateste.aula1.service;

import org.springframework.stereotype.Service;

import com.aulateste.aula1.entidades.Media;

@Service
public class ValidarNotas {
    
   
    public boolean valida(Media media) {
        // Verifica se alguma nota está fora do intervalo válido
        if (media.getNota1() < 0 || media.getNota1() > 10 || media.getNota2() < 0 || media.getNota2() > 10 || media.getNota3() < 0 || media.getNota3() > 10) {
            // Se alguma nota estiver fora do intervalo, retorna false
            return false;
        }
        // Se todas as notas estiverem dentro do intervalo, retorna true
        return true;
    }
    
    
    
    public String validarSituacao(float media) {
        float mediaCalculada = media;

        if (mediaCalculada >= 7) {
            return "Aprovado";
        } else if (mediaCalculada >= 4 && mediaCalculada < 7) {
            return "Aprovado em recuperação";
        } else {
            return "Reprovado";
        }
    }
    
}


