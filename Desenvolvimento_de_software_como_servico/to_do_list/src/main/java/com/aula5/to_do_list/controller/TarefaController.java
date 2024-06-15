package com.aula5.to_do_list.controller;

import com.aula5.to_do_list.entity.Tarefa;
import com.aula5.to_do_list.service.TarefaService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.servlet.ModelAndView;

import java.util.List;

@RestController
@RequestMapping("/api/tarefas")
public class TarefaController {

    @Autowired
    private TarefaService tarefaService;

    @RequestMapping("/")
    public ModelAndView index() {
        ModelAndView modelAndView = new ModelAndView();
        modelAndView.setViewName("index");
        return modelAndView;
    }

    @PostMapping("/criar")
    public ResponseEntity<Tarefa> criarTarefa(@RequestBody Tarefa tarefa) {
        Tarefa novaTarefa = tarefaService.createTarefa(tarefa);
        return new ResponseEntity<>(novaTarefa, HttpStatus.CREATED);
    }

    @GetMapping("/listar")
    public ResponseEntity<List<Tarefa>> listarTarefas() {
        List<Tarefa> tarefas = tarefaService.getAllTarefas();
        return new ResponseEntity<>(tarefas, HttpStatus.OK);
    }

    @GetMapping("/buscar/{id}")
    public ResponseEntity<Tarefa> buscarTarefaPorId(@PathVariable Long id) {
        Tarefa tarefa = tarefaService.getTarefaById(id);
        return new ResponseEntity<>(tarefa, HttpStatus.OK);
    }

    @PutMapping("/atualizar/{id}")
    public ResponseEntity<Tarefa> atualizarTarefa(@PathVariable Long id, @RequestBody Tarefa tarefa) {
        Tarefa tarefaAtualizada = tarefaService.updateTarefa(id, tarefa);
        return new ResponseEntity<>(tarefaAtualizada, HttpStatus.OK);
    }

    @DeleteMapping("/deletar/{id}")
    public ResponseEntity<Void> deletarTarefa(@PathVariable Long id) {
        tarefaService.deleteTarefa(id);
        return new ResponseEntity<>(HttpStatus.NO_CONTENT);
    }
}
