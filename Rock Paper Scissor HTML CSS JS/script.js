const choices = ['Rock' , 'Paper' , 'Scissor'];
const score_label = document.getElementById("score");
const cs_score= document.getElementById("cs_score");
const computer_label = document.getElementById("computerlabl");
const end_label = document.getElementById("end_lbl");
var playerscore = 0;
var computerscore =0;

function rock(){
    var computer_choice = choices[Math.floor(Math.random()*3)];
    if(computer_choice == "Rock"){
        computer_label.textContent = "Rock";
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
    else if(computer_choice=="Paper"){
        computer_label.textContent = "Paper";
        computerscore +=1;
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
    else if(computer_choice=="Scissor"){
        computer_label.textContent = "Scissor";
        playerscore +=1;
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
}

function paper(){
    var computer_choice = choices[Math.floor(Math.random()*3)];
    if(computer_choice == "Rock"){
        computer_label.textContent = "Rock";
        playerscore+=1;
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
    else if(computer_choice=="Paper"){
        computer_label.textContent = "Paper";
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
    else if(computer_choice=="Scissor"){
        computer_label.textContent = "Scissor";
        computerscore+=1;
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;    
    }
}

function scissor(){
    var computer_choice = choices[Math.floor(Math.random()*3)];
    if(computer_choice == "Rock"){
        computer_label.textContent = "Rock";
        computerscore+=1;
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
    else if(computer_choice=="Paper"){
        computer_label.textContent = "Paper";
        playerscore+=1;
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
    else if(computer_choice=="Scissor"){
        computer_label.textContent = "Scissor";
        score_label.textContent = playerscore;
        cs_score.textContent=computerscore;
    }
}

function end(){
    if(playerscore==computerscore){
        end_label.textContent = "It's A Tie ";
    }
    else if(playerscore>computerscore){
        end_label.textContent = "You Win";
    }
    else{
        end_label.textContent = "Computer Wins";
    }
}
