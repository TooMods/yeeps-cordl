#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datum_1)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariableAlloc_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
template <typename T> class Datum_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Datums::Datum_1);
// Type: Unity.XR.CoreUtils.Datums::Datum`1
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::Datum`1<T>*
class CORDL_TYPE Datum_1 : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_BindableVariableReference))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* BindableVariableReference;

  __declspec(property(get = get_Comments, put = set_Comments))::StringW Comments;

  __declspec(property(get = get_ReadOnly, put = set_ReadOnly)) bool ReadOnly;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Field m_BindableVariableReference, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindableVariableReference,
                      put = __cordl_internal_set_m_BindableVariableReference))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>* m_BindableVariableReference;

  /// @brief Field m_Comments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Comments, put = __cordl_internal_set_m_Comments))::StringW m_Comments;

  /// @brief Field m_ReadOnly, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReadOnly, put = __cordl_internal_set_m_ReadOnly)) bool m_ReadOnly;

  /// @brief Field m_Value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) T m_Value;

  static inline ::Unity::XR::CoreUtils::Datums::Datum_1<T>* New_ctor();

  /// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*& __cordl_internal_get_m_BindableVariableReference();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>*> const& __cordl_internal_get_m_BindableVariableReference() const;

  constexpr ::StringW const& __cordl_internal_get_m_Comments() const;

  constexpr ::StringW& __cordl_internal_get_m_Comments();

  constexpr bool const& __cordl_internal_get_m_ReadOnly() const;

  constexpr bool& __cordl_internal_get_m_ReadOnly();

  constexpr T const& __cordl_internal_get_m_Value() const;

  constexpr T& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_BindableVariableReference(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>* value);

  constexpr void __cordl_internal_set_m_Comments(::StringW value);

  constexpr void __cordl_internal_set_m_ReadOnly(bool value);

  constexpr void __cordl_internal_set_m_Value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindableVariableReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* get_BindableVariableReference();

  /// @brief Method get_Comments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_Comments();

  /// @brief Method get_ReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_ReadOnly();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Method set_Comments, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Comments(::StringW value);

  /// @brief Method set_ReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_ReadOnly(bool value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datum_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datum_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datum_1(Datum_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datum_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datum_1(Datum_1 const&) = delete;

  /// @brief Field m_Comments, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Comments;

  /// @brief Field m_ReadOnly, offset: 0x20, size: 0x1, def value: None
  bool ___m_ReadOnly;

  /// @brief Field m_Value, offset: 0x28, size: 0x8, def value: None
  T ___m_Value;

  /// @brief Field m_BindableVariableReference, offset: 0x30, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableAlloc_1<T>* ___m_BindableVariableReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Datums
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Datums::Datum_1, "Unity.XR.CoreUtils.Datums", "Datum`1");
