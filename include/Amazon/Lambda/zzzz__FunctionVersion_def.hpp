#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FunctionVersion)
// Forward declare root types
namespace Amazon::Lambda {
class FunctionVersion;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::FunctionVersion);
// Type: Amazon.Lambda::FunctionVersion
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::FunctionVersion*
class CORDL_TYPE FunctionVersion : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ALL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL, put = setStaticF_ALL))::Amazon::Lambda::FunctionVersion* ALL;

  /// @brief Method FindValue, addr 0x2bb5880, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::FunctionVersion* FindValue(::StringW value);

  static inline ::Amazon::Lambda::FunctionVersion* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb5818, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::FunctionVersion* getStaticF_ALL();

  /// @brief Method op_Implicit, addr 0x2bb58ec, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::FunctionVersion* op_Implicit___Amazon__Lambda__FunctionVersion_(::StringW value);

  static inline void setStaticF_ALL(::Amazon::Lambda::FunctionVersion* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FunctionVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FunctionVersion(FunctionVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FunctionVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FunctionVersion(FunctionVersion const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::FunctionVersion, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::FunctionVersion);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::FunctionVersion*, "Amazon.Lambda", "FunctionVersion");
