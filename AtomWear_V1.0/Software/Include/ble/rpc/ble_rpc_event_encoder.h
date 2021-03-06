/* Copyright (c) 2013 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup ble_rpc_event_encoder Events Encoder
 * @{
 * @ingroup ble_sdk_lib_serialization
 *
 * @brief Event encoder for S110 SoftDevice serialization.
 *
 * @details This module provides a function for serializing S110 SoftDevice events.
 *
 */
#ifndef BLE_RPC_EVENT_ENCODER_H__
#define BLE_RPC_EVENT_ENCODER_H__

#include "ble.h"

/**@brief Function for encoding a @ref ble_evt_t. The function will pass the serialized byte stream to the
 *        transport layer after encoding.
 *
 * @param[in]   p_ble_evt    S110 SoftDevice event to serialize.
 */
void ble_rpc_event_handle(ble_evt_t * p_ble_evt);

#endif // BLE_RPC_EVENT_ENCODER_H__

/** @} */
