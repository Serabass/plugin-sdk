/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "eTaskType.h"

class PLUGIN_API CTask {
    CTask() = delete;
protected:
    CTask(plugin::dummy_func_t) {}
public:
	class CTask *m_pParentTask;

	void *operator new(unsigned int size);
	void operator delete(void *object);

    virtual ~CTask() {}
	virtual class CTask *Clone();//=0
	virtual class CTask *GetSubTask();//=0
	virtual bool IsSimple();//=0
	virtual eTaskType GetId();//=0
	virtual void StopTimer(class CEvent *_event);
	virtual bool MakeAbortable(class CPed *ped, int priority, class CEvent *_event);//=0
};

VALIDATE_SIZE(CTask, 8);