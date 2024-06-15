package com.conversortemperatura.conversor_temperatura.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.servlet.ModelAndView;

import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.PostMapping;

@Controller
public class ConversorControlller {

    @RequestMapping("/")
    public ModelAndView conversor(){
        ModelAndView modelAndView = new ModelAndView();
        modelAndView.setViewName("index");
        return modelAndView;
    }

    @PostMapping("/converter")
    public String converter(@RequestParam("num1") double num1,  
                            @RequestParam("operator") 
                            String operator, Model model){

        double result = 0;

        switch (operator) {
            case "f":
                // celsius para fahrenheit
                result = (num1 * 9/5 ) + 32;
                break;
            case "c":
                // fahrenheit para celsius
                result = (double) 5/9 * (num1 - 32);
                break;
        }
        
        model.addAttribute("result", result); 
        return "index";
    }
}

