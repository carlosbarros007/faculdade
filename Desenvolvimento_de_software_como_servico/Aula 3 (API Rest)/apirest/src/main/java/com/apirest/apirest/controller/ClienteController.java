package com.apirest.apirest.controller;

import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.GetMapping;



@RestController
@RequestMapping("/")

public class ClienteController {
    
    @GetMapping
    public String ola() {
        return "ola";
    }
    

}
