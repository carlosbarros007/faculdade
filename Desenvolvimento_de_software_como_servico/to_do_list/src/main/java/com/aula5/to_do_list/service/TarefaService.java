package com.aula5.to_do_list.service;

import java.util.List;
import java.util.Objects;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.aula5.to_do_list.entity.Tarefa;
import com.aula5.to_do_list.repository.TarefaRepository;

@Service
public class TarefaService {
    
    @Autowired
    private TarefaRepository tarefaRepository;

    public Tarefa createTarefa(Tarefa tarefa) {
        Objects.requireNonNull(tarefa, "Tarefa inválida");
        return tarefaRepository.save(tarefa);
    }

    public List<Tarefa> getAllTarefas() {
        return tarefaRepository.findAll();
    }

    public Tarefa getTarefaById(Long id) {
        return tarefaRepository.findById(id)
                .orElseThrow(() -> new IllegalArgumentException("Tarefa não encontrada com o ID: " + id));
    }

    public void deleteTarefa(Long id) {
        tarefaRepository.deleteById(id);
    }

    public Tarefa updateTarefa(Long id, Tarefa novaTarefa) {
        Tarefa tarefaExistente = getTarefaById(id);
        tarefaExistente.setDescricao(novaTarefa.getDescricao());
        tarefaExistente.setDataCriacao(novaTarefa.getDataCriacao());
        tarefaExistente.setDataConclusao(novaTarefa.getDataConclusao());
        tarefaExistente.setConcluida(novaTarefa.isConcluida());
        return tarefaRepository.save(tarefaExistente);
    }
}
