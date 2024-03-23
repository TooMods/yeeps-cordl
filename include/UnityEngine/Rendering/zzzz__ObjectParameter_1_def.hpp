#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectParameter_1)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
namespace UnityEngine::Rendering {
template <typename T> class __ObjectParameter_1____c;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class ObjectParameter_1;
}
namespace UnityEngine::Rendering {
template <typename T> class __ObjectParameter_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ObjectParameter_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::__ObjectParameter_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ObjectParameter`1::<>c<T>*
class CORDL_TYPE __ObjectParameter_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::__ObjectParameter_1____c<T>* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_1, put = setStaticF___9__9_1))::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* __9__9_1;

  static inline ::UnityEngine::Rendering::__ObjectParameter_1____c<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_value>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _set_value_b__9_0(::System::Reflection::FieldInfo* t);

  /// @brief Method <set_value>b__9_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _set_value_b__9_1(::System::Reflection::FieldInfo* t);

  static inline ::UnityEngine::Rendering::__ObjectParameter_1____c<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__9_0();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* getStaticF___9__9_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::__ObjectParameter_1____c<T>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

  static inline void setStaticF___9__9_1(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectParameter_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObjectParameter_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectParameter_1____c(__ObjectParameter_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectParameter_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectParameter_1____c(__ObjectParameter_1____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::ObjectParameter`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ObjectParameter`1<T>*
class CORDL_TYPE ObjectParameter_1 : public ::UnityEngine::Rendering::VolumeParameter_1<T> {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::__ObjectParameter_1____c<T>;

  /// @brief Field <parameters>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__parameters_k__BackingField,
      put = __cordl_internal_set__parameters_k__BackingField))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* _parameters_k__BackingField;

  __declspec(property(get = get_overrideState, put = set_overrideState)) bool overrideState;

  __declspec(property(get = get_parameters, put = set_parameters))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* parameters;

  __declspec(property(get = get_value, put = set_value)) T value;

  /// @brief Method Interp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::Rendering::VolumeParameter* from, ::UnityEngine::Rendering::VolumeParameter* to, float_t t);

  static inline ::UnityEngine::Rendering::ObjectParameter_1<T>* New_ctor(T value);

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*& __cordl_internal_get__parameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*> const&
  __cordl_internal_get__parameters_k__BackingField() const;

  constexpr void __cordl_internal_set__parameters_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  /// @brief Method <set_value>b__9_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeParameter* _set_value_b__9_2(::System::Reflection::FieldInfo* t);

  /// @brief Method get_overrideState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_overrideState();

  /// @brief Method get_parameters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* get_parameters();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_value();

  /// @brief Method set_overrideState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_overrideState(bool value);

  /// @brief Method set_parameters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_parameters(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectParameter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectParameter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectParameter_1(ObjectParameter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectParameter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectParameter_1(ObjectParameter_1 const&) = delete;

  /// @brief Field <parameters>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* ____parameters_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ObjectParameter_1, "UnityEngine.Rendering", "ObjectParameter`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::__ObjectParameter_1____c, "UnityEngine.Rendering", "ObjectParameter`1/<>c");
