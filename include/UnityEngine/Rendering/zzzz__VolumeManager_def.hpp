#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine::Rendering {
class __VolumeManager____c;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeManager;
}
namespace UnityEngine::Rendering {
class __VolumeManager____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeManager);
MARK_REF_PTR_T(::UnityEngine::Rendering::__VolumeManager____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::VolumeManager::<>c*
class CORDL_TYPE __VolumeManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__VolumeManager____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Func_2<::System::Type*, bool>* __9__25_0;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0))::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* __9__38_0;

  static inline ::UnityEngine::Rendering::__VolumeManager____c* New_ctor();

  /// @brief Method <GetVolumes>b__38_0, addr 0x17d5f9c, size 0x5c, virtual false, abstract: false, final false
  inline bool _GetVolumes_b__38_0(::UnityEngine::Rendering::Volume* v);

  /// @brief Method <ReloadBaseTypes>b__25_0, addr 0x17d5f74, size 0x28, virtual false, abstract: false, final false
  inline bool _ReloadBaseTypes_b__25_0(::System::Type* t);

  /// @brief Method <.cctor>b__42_0, addr 0x17d5ff8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeManager* __cctor_b__42_0();

  /// @brief Method .ctor, addr 0x17d5f6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__VolumeManager____c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__25_0();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* getStaticF___9__38_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::__VolumeManager____c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__38_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::Volume>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VolumeManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VolumeManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VolumeManager____c(__VolumeManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VolumeManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VolumeManager____c(__VolumeManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__VolumeManager____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::VolumeManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::VolumeManager*
class CORDL_TYPE VolumeManager : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__VolumeManager____c;

  /// @brief Field <baseComponentTypeArray>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseComponentTypeArray_k__BackingField,
                      put = __cordl_internal_set__baseComponentTypeArray_k__BackingField))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _baseComponentTypeArray_k__BackingField;

  /// @brief Field <stack>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack_k__BackingField, put = __cordl_internal_set__stack_k__BackingField))::UnityEngine::Rendering::VolumeStack* _stack_k__BackingField;

  __declspec(property(get = get_baseComponentTypeArray, put = set_baseComponentTypeArray))::ArrayW<::System::Type*, ::Array<::System::Type*>*> baseComponentTypeArray;

  __declspec(property(get = get_baseComponentTypes, put = set_baseComponentTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* baseComponentTypes;

  /// @brief Field m_ComponentsDefaultState, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ComponentsDefaultState,
                      put = __cordl_internal_set_m_ComponentsDefaultState))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* m_ComponentsDefaultState;

  /// @brief Field m_DefaultStack, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStack, put = __cordl_internal_set_m_DefaultStack))::UnityEngine::Rendering::VolumeStack* m_DefaultStack;

  /// @brief Field m_SortNeeded, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortNeeded, put = __cordl_internal_set_m_SortNeeded))::System::Collections::Generic::Dictionary_2<int32_t, bool>* m_SortNeeded;

  /// @brief Field m_SortedVolumes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedVolumes, put = __cordl_internal_set_m_SortedVolumes))::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* m_SortedVolumes;

  /// @brief Field m_TempColliders, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempColliders,
                      put = __cordl_internal_set_m_TempColliders))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* m_TempColliders;

  /// @brief Field m_Volumes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Volumes, put = __cordl_internal_set_m_Volumes))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* m_Volumes;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* s_Instance;

  __declspec(property(get = get_stack, put = set_stack))::UnityEngine::Rendering::VolumeStack* stack;

  /// @brief Method CheckBaseTypes, addr 0x17d4e7c, size 0xbc, virtual false, abstract: false, final false
  inline void CheckBaseTypes();

  /// @brief Method CheckStack, addr 0x17d4f38, size 0x204, virtual false, abstract: false, final false
  inline void CheckStack(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method CheckUpdateRequired, addr 0x17d513c, size 0x74, virtual false, abstract: false, final false
  inline bool CheckUpdateRequired(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method CreateStack, addr 0x17d4b9c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* CreateStack();

  /// @brief Method DestroyStack, addr 0x17d4c18, size 0x18, virtual false, abstract: false, final false
  inline void DestroyStack(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method GetVolumes, addr 0x17d5b94, size 0x138, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> GetVolumes(::UnityEngine::LayerMask layerMask);

  /// @brief Method GrabVolumes, addr 0x17d57b0, size 0x3e4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* GrabVolumes(::UnityEngine::LayerMask mask);

  /// @brief Method IsComponentActiveInMask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsComponentActiveInMask(::UnityEngine::LayerMask layerMask);

  /// @brief Method IsVolumeRenderedByCamera, addr 0x17d5df8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsVolumeRenderedByCamera(::UnityEngine::Rendering::Volume* volume, ::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::VolumeManager* New_ctor();

  /// @brief Method OverrideData, addr 0x17d4c30, size 0x1ac, virtual false, abstract: false, final false
  inline void OverrideData(::UnityEngine::Rendering::VolumeStack* stack, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* components, float_t interpFactor);

  /// @brief Method Register, addr 0x17d2668, size 0x2a0, virtual false, abstract: false, final false
  inline void Register(::UnityEngine::Rendering::Volume* volume, int32_t layer);

  /// @brief Method ReloadBaseTypes, addr 0x17d4890, size 0x30c, virtual false, abstract: false, final false
  inline void ReloadBaseTypes();

  /// @brief Method ReplaceData, addr 0x17d4ddc, size 0xa0, virtual false, abstract: false, final false
  inline void ReplaceData(::UnityEngine::Rendering::VolumeStack* stack);

  /// @brief Method ResetMainStack, addr 0x17d4c0c, size 0xc, virtual false, abstract: false, final false
  inline void ResetMainStack();

  /// @brief Method SetLayerDirty, addr 0x17d2c80, size 0x184, virtual false, abstract: false, final false
  inline void SetLayerDirty(int32_t layer);

  /// @brief Method SortByPriority, addr 0x17d5ccc, size 0x12c, virtual false, abstract: false, final false
  static inline void SortByPriority(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* volumes);

  /// @brief Method Unregister, addr 0x17d298c, size 0x1a8, virtual false, abstract: false, final false
  inline void Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer);

  /// @brief Method Update, addr 0x17d51c4, size 0x5ec, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask);

  /// @brief Method Update, addr 0x17d51b0, size 0x14, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask);

  /// @brief Method UpdateVolumeLayer, addr 0x17d2e04, size 0x30, virtual false, abstract: false, final false
  inline void UpdateVolumeLayer(::UnityEngine::Rendering::Volume* volume, int32_t prevLayer, int32_t newLayer);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__baseComponentTypeArray_k__BackingField() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__baseComponentTypeArray_k__BackingField();

  constexpr ::UnityEngine::Rendering::VolumeStack*& __cordl_internal_get__stack_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::VolumeStack*> const& __cordl_internal_get__stack_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*& __cordl_internal_get_m_ComponentsDefaultState();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>*> const&
  __cordl_internal_get_m_ComponentsDefaultState() const;

  constexpr ::UnityEngine::Rendering::VolumeStack*& __cordl_internal_get_m_DefaultStack();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::VolumeStack*> const& __cordl_internal_get_m_DefaultStack() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>*& __cordl_internal_get_m_SortNeeded();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, bool>*> const& __cordl_internal_get_m_SortNeeded() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>*& __cordl_internal_get_m_SortedVolumes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>*> const&
  __cordl_internal_get_m_SortedVolumes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_TempColliders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_TempColliders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*& __cordl_internal_get_m_Volumes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*> const& __cordl_internal_get_m_Volumes() const;

  constexpr void __cordl_internal_set__baseComponentTypeArray_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__stack_k__BackingField(::UnityEngine::Rendering::VolumeStack* value);

  constexpr void __cordl_internal_set_m_ComponentsDefaultState(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* value);

  constexpr void __cordl_internal_set_m_DefaultStack(::UnityEngine::Rendering::VolumeStack* value);

  constexpr void __cordl_internal_set_m_SortNeeded(::System::Collections::Generic::Dictionary_2<int32_t, bool>* value);

  constexpr void
  __cordl_internal_set_m_SortedVolumes(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* value);

  constexpr void __cordl_internal_set_m_TempColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set_m_Volumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* value);

  /// @brief Method .ctor, addr 0x17d46e4, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* getStaticF_s_Instance();

  /// @brief Method get_baseComponentTypeArray, addr 0x17d46d4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_baseComponentTypeArray();

  /// @brief Method get_baseComponentTypes, addr 0x17d4670, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_baseComponentTypes();

  /// @brief Method get_instance, addr 0x17d25f0, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::VolumeManager* get_instance();

  /// @brief Method get_stack, addr 0x17d4660, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* get_stack();

  static inline void setStaticF_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* value);

  /// @brief Method set_baseComponentTypeArray, addr 0x17d46dc, size 0x8, virtual false, abstract: false, final false
  inline void set_baseComponentTypeArray(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method set_baseComponentTypes, addr 0x17d4678, size 0x5c, virtual false, abstract: false, final false
  inline void set_baseComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  /// @brief Method set_stack, addr 0x17d4668, size 0x8, virtual false, abstract: false, final false
  inline void set_stack(::UnityEngine::Rendering::VolumeStack* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeManager(VolumeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeManager(VolumeManager const&) = delete;

  /// @brief Field <stack>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::VolumeStack* ____stack_k__BackingField;

  /// @brief Field <baseComponentTypeArray>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____baseComponentTypeArray_k__BackingField;

  /// @brief Field m_SortedVolumes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* ___m_SortedVolumes;

  /// @brief Field m_Volumes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* ___m_Volumes;

  /// @brief Field m_SortNeeded, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, bool>* ___m_SortNeeded;

  /// @brief Field m_ComponentsDefaultState, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::VolumeComponent>>* ___m_ComponentsDefaultState;

  /// @brief Field m_TempColliders, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* ___m_TempColliders;

  /// @brief Field m_DefaultStack, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::VolumeStack* ___m_DefaultStack;

  /// @brief Field k_MaxLayerCount offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxLayerCount{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____stack_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ____baseComponentTypeArray_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_SortedVolumes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_Volumes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_SortNeeded) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_ComponentsDefaultState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_TempColliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeManager, ___m_DefaultStack) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeManager*, "UnityEngine.Rendering", "VolumeManager");
NEED_NO_BOX(::UnityEngine::Rendering::__VolumeManager____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__VolumeManager____c*, "UnityEngine.Rendering", "VolumeManager/<>c");
