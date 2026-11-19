function verificar(){
    let nota = parseFloat(document.getElementById("nota").value);
    let resultado = document.getElementById("resultado");

    // verificar se a nota foi preenchida
    if (isNaN(nota) || nota < 0 || nota > 10){
        resultado.textContent = "Digite uma nota valida entre 0 a 10";
        resultado.style.color = "orange";
        return;
    }

    let contador = 0;
    
    while (contador < 1){
        // Corrigido de 'nora' para 'nota'
        if (nota >= 7){
            resultado.textContent = "Aprovado";
            resultado.style.color = "green";
        } else {
            resultado.textContent = "Reprovado";
            resultado.style.color = "red";
        }
        
        contador++; // Incremento dentro do while para evitar loop infinito
    }
}