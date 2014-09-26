#ifndef _BSP_H
#define _BSP_H

/**
 * @brief Prende un led
 *
 * @param led Led a prender
 */
void led_on(uint8_t led);

/**
 * @brief Apaga un led
 *
 * @param led Led a apagar
 */
void led_off(uint8_t led);

void led_toggle(uint8_t led);

/**
 * @brief Delay por software
 */
uint8_t sw_getState();

/**
 * @brief Inicializacion de los servicios de BSP
 */
void bsp_init();

#endif
