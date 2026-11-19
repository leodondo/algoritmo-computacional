function verificar(){
    let nota = parseFloat(document.getElementById("nota").value);
    let resultado = document.getElementById("resultado");

    // Validação do campo está vazio ou inválido (Corrigido 'nora' para 'nota')
    if (isNaN(nota) || nota < 0 || nota > 10){
        resultado.textContent = "Digite uma nota valida entre 0 a 10";
        resultado.className = "";
        return;
    }

    // Estrutura switch
    switch (true){
        case (nota >= 7):
            resultado.textContent = "Aprovado";
            resultado.className = "aprovado";
            break;
        default:
            // O default funciona como else
            resultado.textContent = "Reprovado";
            resultado.className = "reprovado";
            break;
    }
}