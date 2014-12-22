

#ifndef COM_PBCFG_H
#define COM_PBCFG_H

#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 0)) )
#error Com: Configuration file expected BSW module version to be 1.0.*
#endif

#if !(((COM_AR_RELEASE_MAJOR_VERSION == 4) && (COM_AR_RELEASE_MINOR_VERSION == 0)) )
#error Com: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#include "Com_Types.h"

// COM IPDU IDs
#define COM_PDU_ID_PLUGININSTALLATIONVCUPDU					0
#define COM_PDU_ID_ACKNOWLEDGEMENTVCUPDU					1
#define COM_PDU_ID_PLUGINCOMMUNICATIONTCUTOVCUPDU					2
#define COM_PDU_ID_PLUGINCOMMUNICATIONVCUTOTCUPDU					3
#define COM_PDU_ID_DRIVERSETSPEEDSTEERINGPDU					4
#define COM_PDU_ID_PLUGINCOMMUNICATIONSCUTOVCUPDU					5
#define COM_PDU_ID_PLUGINCOMMUNICATIONVCUTOSCUPDU					6
#define COM_PDU_ID_POISTIONDATAPDU					7

// COM PDU GROUP IDs
#define COM_PDU_GROUP_ID_TXIPDUGROUP			0
#define COM_PDU_GROUP_ID_RXIPDUGROUP			1

// COM SIGNAL IDs
#define COM_SIGNAL_ID_PLUGININSTALLATIONVCUSIGNAL			0
#define COM_SIGNAL_ID_PLUGINCOMMUNICATIONVCUTOTCUSIGNAL			1
#define COM_SIGNAL_ID_PLUGINCOMMUNICATIONTCUTOVCUSIGNAL			2
#define COM_SIGNAL_ID_ACKNOWLEDGEMENTVCUSIGNAL			3
#define COM_SIGNAL_ID_DRIVERSETSPEEDSTEERINGSIGNAL			4
#define COM_SIGNAL_ID_PLUGINCOMMUNICATIONVCUTOSCUSIGNAL			5
#define COM_SIGNAL_ID_PLUGINCOMMUNICATIONSCUTOVCUSIGNAL			6
#define COM_SIGNAL_ID_POSITIONDATASIGNAL			7

// COM GROUP SIGNAL IDs

#endif /* COM_PBCFG_H */
