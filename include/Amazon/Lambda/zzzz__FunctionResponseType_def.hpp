#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FunctionResponseType)
// Forward declare root types
namespace Amazon::Lambda {
class FunctionResponseType;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::FunctionResponseType);
// Type: Amazon.Lambda::FunctionResponseType
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Lambda {
// Is value type: false
// CS Name: ::Amazon.Lambda::FunctionResponseType*
class CORDL_TYPE FunctionResponseType : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field ReportBatchItemFailures, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReportBatchItemFailures, put = setStaticF_ReportBatchItemFailures))::Amazon::Lambda::FunctionResponseType* ReportBatchItemFailures;

  /// @brief Method FindValue, addr 0x2bb56e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::FunctionResponseType* FindValue(::StringW value);

  static inline ::Amazon::Lambda::FunctionResponseType* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2bb5678, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::Lambda::FunctionResponseType* getStaticF_ReportBatchItemFailures();

  /// @brief Method op_Implicit, addr 0x2bb574c, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::FunctionResponseType* op_Implicit___Amazon__Lambda__FunctionResponseType_(::StringW value);

  static inline void setStaticF_ReportBatchItemFailures(::Amazon::Lambda::FunctionResponseType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionResponseType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FunctionResponseType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FunctionResponseType(FunctionResponseType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FunctionResponseType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FunctionResponseType(FunctionResponseType const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::FunctionResponseType, 0x18>, "Size mismatch!");

} // namespace Amazon::Lambda
NEED_NO_BOX(::Amazon::Lambda::FunctionResponseType);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::FunctionResponseType*, "Amazon.Lambda", "FunctionResponseType");
