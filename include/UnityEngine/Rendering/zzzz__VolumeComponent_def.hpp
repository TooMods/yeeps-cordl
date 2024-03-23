#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeComponent)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
namespace UnityEngine::Rendering {
class __VolumeComponent__Indent;
}
namespace UnityEngine::Rendering {
class __VolumeComponent____c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class __VolumeComponent__Indent;
}
namespace UnityEngine::Rendering {
class __VolumeComponent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponent);
MARK_REF_PTR_T(::UnityEngine::Rendering::__VolumeComponent__Indent);
MARK_REF_PTR_T(::UnityEngine::Rendering::__VolumeComponent____c);
// Type: ::Indent
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::VolumeComponent::Indent*
class CORDL_TYPE __VolumeComponent__Indent : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field relativeAmount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_relativeAmount, put = __cordl_internal_set_relativeAmount)) int32_t relativeAmount;

  static inline ::UnityEngine::Rendering::__VolumeComponent__Indent* New_ctor(int32_t relativeAmount);

  constexpr int32_t const& __cordl_internal_get_relativeAmount() const;

  constexpr int32_t& __cordl_internal_get_relativeAmount();

  constexpr void __cordl_internal_set_relativeAmount(int32_t value);

  /// @brief Method .ctor, addr 0x17d45a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t relativeAmount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VolumeComponent__Indent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VolumeComponent__Indent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VolumeComponent__Indent(__VolumeComponent__Indent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VolumeComponent__Indent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VolumeComponent__Indent(__VolumeComponent__Indent const&) = delete;

  /// @brief Field relativeAmount, offset: 0x10, size: 0x4, def value: None
  int32_t ___relativeAmount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__VolumeComponent__Indent, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__VolumeComponent__Indent, ___relativeAmount) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::VolumeComponent::<>c*
class CORDL_TYPE __VolumeComponent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__VolumeComponent____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* __9__10_0;

  static inline ::UnityEngine::Rendering::__VolumeComponent____c* New_ctor();

  /// @brief Method <FindParameters>b__10_0, addr 0x17d463c, size 0x24, virtual false, abstract: false, final false
  inline int32_t _FindParameters_b__10_0(::System::Reflection::FieldInfo* t);

  /// @brief Method .ctor, addr 0x17d4634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::__VolumeComponent____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* getStaticF___9__10_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::__VolumeComponent____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VolumeComponent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VolumeComponent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VolumeComponent____c(__VolumeComponent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VolumeComponent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VolumeComponent____c(__VolumeComponent____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__VolumeComponent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::VolumeComponent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::VolumeComponent*
class CORDL_TYPE VolumeComponent : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using Indent = ::UnityEngine::Rendering::__VolumeComponent__Indent;

  using __c = ::UnityEngine::Rendering::__VolumeComponent____c;

  /// @brief Field <displayName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__parameters_k__BackingField,
      put = __cordl_internal_set__parameters_k__BackingField))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* _parameters_k__BackingField;

  /// @brief Field active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_active, put = __cordl_internal_set_active)) bool active;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_parameters, put = set_parameters))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* parameters;

  /// @brief Method FindParameters, addr 0x17d30f8, size 0x62c, virtual false, abstract: false, final false
  static inline void FindParameters(::System::Object* o, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* parameters,
                                    ::System::Func_2<::System::Reflection::FieldInfo*, bool>* filter);

  /// @brief Method GetHashCode, addr 0x17d43c0, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::VolumeComponent* New_ctor();

  /// @brief Method OnDestroy, addr 0x17d4488, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x17d3ad4, size 0x284, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x17d3724, size 0x3b0, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Override, addr 0x17d3d58, size 0x134, virtual true, abstract: false, final false
  inline void Override(::UnityEngine::Rendering::VolumeComponent* state, float_t interpFactor);

  /// @brief Method Release, addr 0x17d448c, size 0xc4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetAllOverridesTo, addr 0x17d3e8c, size 0x10, virtual false, abstract: false, final false
  inline void SetAllOverridesTo(bool state);

  /// @brief Method SetOverridesTo, addr 0x17d3e9c, size 0x3f0, virtual false, abstract: false, final false
  inline void SetOverridesTo(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>* enumerable, bool state);

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*& __cordl_internal_get__parameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*> const&
  __cordl_internal_get__parameters_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_active() const;

  constexpr bool& __cordl_internal_get_active();

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__parameters_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value);

  constexpr void __cordl_internal_set_active(bool value);

  /// @brief Method .ctor, addr 0x17d4550, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_displayName, addr 0x17d30d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_parameters, addr 0x17d30e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* get_parameters();

  /// @brief Method set_displayName, addr 0x17d30e0, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_parameters, addr 0x17d30f0, size 0x8, virtual false, abstract: false, final false
  inline void set_parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponent(VolumeComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponent(VolumeComponent const&) = delete;

  /// @brief Field active, offset: 0x18, size: 0x1, def value: None
  bool ___active;

  /// @brief Field <displayName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* ____parameters_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponent, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ___active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ____displayName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ____parameters_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponent*, "UnityEngine.Rendering", "VolumeComponent");
NEED_NO_BOX(::UnityEngine::Rendering::__VolumeComponent__Indent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__VolumeComponent__Indent*, "UnityEngine.Rendering", "VolumeComponent/Indent");
NEED_NO_BOX(::UnityEngine::Rendering::__VolumeComponent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__VolumeComponent____c*, "UnityEngine.Rendering", "VolumeComponent/<>c");
