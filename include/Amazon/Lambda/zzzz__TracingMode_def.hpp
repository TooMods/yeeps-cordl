#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TracingMode)
// Forward declare root types
namespace Amazon::Lambda {
class TracingMode;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::TracingMode);
// Type: Amazon.Lambda::TracingMode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::TracingMode*
class CORDL_TYPE TracingMode : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Active, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Active, put = setStaticF_Active))::Amazon::Lambda::TracingMode* Active;

  /// @brief Field PassThrough, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PassThrough, put = setStaticF_PassThrough))::Amazon::Lambda::TracingMode* PassThrough;

  /// @brief Method FindValue, addr 0x2bb792c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::TracingMode* FindValue(::StringW value);

  static inline ::Amazon::Lambda::TracingMode* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb78c4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::TracingMode* getStaticF_Active();

  static inline ::Amazon::Lambda::TracingMode* getStaticF_PassThrough();

  /// @brief Method op_Implicit, addr 0x2bb7998, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::TracingMode* op_Implicit___Amazon__Lambda__TracingMode_(::StringW value);

  static inline void setStaticF_Active(::Amazon::Lambda::TracingMode* value);

  static inline void setStaticF_PassThrough(::Amazon::Lambda::TracingMode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TracingMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TracingMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TracingMode(TracingMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TracingMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TracingMode(TracingMode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::TracingMode, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::TracingMode);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::TracingMode*, "Amazon.Lambda", "TracingMode");
