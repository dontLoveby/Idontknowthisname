function countdownTimer(duration, displayElement) {
    let timer = duration;
    let intervalId;

    const startTimer = () => {
        clearInterval(intervalId); // 清除之前的定时器
        intervalId = setInterval(() => {
            const minutes = Math.floor(timer / 60).toString().padStart(2, '0');
            const seconds = (timer % 60).toString().padStart(2, '0');
            //displayElement.textContent = minutes + ":" + seconds;
            if (--timer <= 0) {
                clearInterval(intervalId);
                //displayElement.textContent = "Time's up!";
            }
        }, 1000);
    };
    const stopTimer = () => {
        clearInterval(intervalId);
    };
    const getValue = () => {
        return timer;
    };
    const restartTimer = () => {
        timer = duration; // 重置计时器数值
        startTimer(); // 开始计时
    };

    return {
        start: startTimer,
        stop: stopTimer,
        restart: restartTimer,
        getValue: getValue
    };
}