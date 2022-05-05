#ifndef __POINT_ARRAY_H__
#define __POINT_ARRAY_H__

#ifdef __cplusplus
extern "C" {
#endif
void* CreatePointArray(int size);
void SetPointValue(void *rowPtr, uint32_t index, void *value);
void* GetPointValue(void *rowPtr, uint32_t index);

#ifdef __cplusplus
}
#endif
#endif