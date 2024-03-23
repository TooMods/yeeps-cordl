#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CodeSigningPolicy)
// Forward declare root types
namespace Amazon::Lambda {
class CodeSigningPolicy;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::CodeSigningPolicy);
// Type: Amazon.Lambda::CodeSigningPolicy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::CodeSigningPolicy*
class CORDL_TYPE CodeSigningPolicy : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field Enforce, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Enforce, put = setStaticF_Enforce))::Amazon::Lambda::CodeSigningPolicy* Enforce;

  /// @brief Field Warn, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Warn, put = setStaticF_Warn))::Amazon::Lambda::CodeSigningPolicy* Warn;

  /// @brief Method FindValue, addr 0x2bb515c, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::CodeSigningPolicy* FindValue(::StringW value);

  static inline ::Amazon::Lambda::CodeSigningPolicy* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb50f4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::CodeSigningPolicy* getStaticF_Enforce();

  static inline ::Amazon::Lambda::CodeSigningPolicy* getStaticF_Warn();

  /// @brief Method op_Implicit, addr 0x2bb51c8, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::CodeSigningPolicy* op_Implicit___Amazon__Lambda__CodeSigningPolicy_(::StringW value);

  static inline void setStaticF_Enforce(::Amazon::Lambda::CodeSigningPolicy* value);

  static inline void setStaticF_Warn(::Amazon::Lambda::CodeSigningPolicy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeSigningPolicy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeSigningPolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeSigningPolicy(CodeSigningPolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeSigningPolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeSigningPolicy(CodeSigningPolicy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::CodeSigningPolicy, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::CodeSigningPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::CodeSigningPolicy*, "Amazon.Lambda", "CodeSigningPolicy");
