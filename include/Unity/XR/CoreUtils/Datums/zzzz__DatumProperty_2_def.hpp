#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DatumProperty_2)
namespace Unity::XR::CoreUtils::Datums {
template <typename T> class Datum_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
template <typename TValue, typename TDatum> class DatumProperty_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Datums::DatumProperty_2);
// Type: Unity.XR.CoreUtils.Datums::DatumProperty`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// cpp template
template <typename TValue, typename TDatum>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::DatumProperty`2<TValue,TDatum>*
class CORDL_TYPE DatumProperty_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConstantValue)) TValue ConstantValue;

  __declspec(property(get = get_Datum))::UnityW<TValue> Datum;

  __declspec(property(get = get_Value, put = set_Value)) TValue Value;

  /// @brief Field m_ConstantValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ConstantValue, put = __cordl_internal_set_m_ConstantValue)) TValue m_ConstantValue;

  /// @brief Field m_UseConstant, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseConstant, put = __cordl_internal_set_m_UseConstant)) bool m_UseConstant;

  /// @brief Field m_Variable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Variable, put = __cordl_internal_set_m_Variable)) TDatum m_Variable;

  static inline ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue, TDatum>* New_ctor();

  static inline ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue, TDatum>* New_ctor(TDatum datum);

  static inline ::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue, TDatum>* New_ctor(TValue value);

  constexpr TValue const& __cordl_internal_get_m_ConstantValue() const;

  constexpr TValue& __cordl_internal_get_m_ConstantValue();

  constexpr bool const& __cordl_internal_get_m_UseConstant() const;

  constexpr bool& __cordl_internal_get_m_UseConstant();

  constexpr TDatum const& __cordl_internal_get_m_Variable() const;

  constexpr TDatum& __cordl_internal_get_m_Variable();

  constexpr void __cordl_internal_set_m_ConstantValue(TValue value);

  constexpr void __cordl_internal_set_m_UseConstant(bool value);

  constexpr void __cordl_internal_set_m_Variable(TDatum value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TDatum datum);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TValue value);

  /// @brief Method get_ConstantValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_ConstantValue();

  /// @brief Method get_Datum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityW<TValue> get_Datum();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Value();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline TValue op_Implicit_TValue(::Unity::XR::CoreUtils::Datums::DatumProperty_2<TValue, TDatum>* datumProperty);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DatumProperty_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DatumProperty_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DatumProperty_2(DatumProperty_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DatumProperty_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DatumProperty_2(DatumProperty_2 const&) = delete;

  /// @brief Field m_UseConstant, offset: 0x10, size: 0x1, def value: None
  bool ___m_UseConstant;

  /// @brief Field m_ConstantValue, offset: 0x18, size: 0x8, def value: None
  TValue ___m_ConstantValue;

  /// @brief Field m_Variable, offset: 0x20, size: 0x8, def value: None
  TDatum ___m_Variable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Datums
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Datums::DatumProperty_2, "Unity.XR.CoreUtils.Datums", "DatumProperty`2");
