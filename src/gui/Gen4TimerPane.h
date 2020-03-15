//
// Created by Dylan Meadows on 2020-03-09.
//

#ifndef EONTIMER_GEN4TIMERPANE_H
#define EONTIMER_GEN4TIMERPANE_H

#include <QWidget>
#include <services/TimerService.h>
#include <services/CalibrationService.h>
#include <services/timer/DelayTimer.h>

class QSpinBox;

namespace gui {
    class Gen4TimerPane : public QWidget {
    Q_OBJECT
    private:
        const service::timer::DelayTimer *delayTimer;
        const service::CalibrationService *calibrationService;
        service::TimerService *timerService;
        QSpinBox *targetDelay;
        QSpinBox *targetSecond;
        QSpinBox *calibratedDelay;
        QSpinBox *calibratedSecond;
        QSpinBox *delayHit;
    public:
        explicit Gen4TimerPane(const service::timer::DelayTimer *delayTimer,
                               const service::CalibrationService *calibrationService,
                               service::TimerService *timerService);

        void calibrateTimer();

    private:
        void initComponents();

        void updateTimer();
    };
}


#endif //EONTIMER_GEN4TIMERPANE_H