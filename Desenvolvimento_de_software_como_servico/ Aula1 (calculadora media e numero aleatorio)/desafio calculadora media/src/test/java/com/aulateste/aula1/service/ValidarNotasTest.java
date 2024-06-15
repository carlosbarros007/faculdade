package com.aulateste.aula1.service;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;

import com.aulateste.aula1.entidades.Media;

public class ValidarNotasTest {
   
    @Test
    public void testValidaNotasDentroDoIntervalo() {
        // Cria uma instância de ValidadorNotas
        ValidarNotas validador = new ValidarNotas();

        // Cria um objeto Media com notas dentro do intervalo válido
        Media media = new Media(7.5f, 8.0f, 9.5f);

        // Verifica se o método retorna true para notas dentro do intervalo
        assertTrue(validador.valida(media));
    }

    @Test
    public void testValidaNotasForaDoIntervalo() {
        // Cria uma instância de ValidadorNotas
        ValidarNotas validador = new ValidarNotas();

        // Cria um objeto Media com pelo menos uma nota fora do intervalo válido
        Media media = new Media(7.5f, 11.0f, 9.5f);

        // Verifica se o método retorna false para notas fora do intervalo
        assertFalse(validador.valida(media));
    }

    @Test
    public void testValidarSituacaoAprovado() {
        // Cria uma instância de ValidadorSituacao
        ValidarNotas validador = new ValidarNotas();

        // Testa para uma média maior ou igual a 7
        assertEquals("Aprovado", validador.validarSituacao(7.5f));
        assertEquals("Aprovado", validador.validarSituacao(8.0f));
    }
}
