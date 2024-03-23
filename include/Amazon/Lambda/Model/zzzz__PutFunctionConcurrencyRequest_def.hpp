#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PutFunctionConcurrencyRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class PutFunctionConcurrencyRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::PutFunctionConcurrencyRequest);
// Type: Amazon.Lambda.Model::PutFunctionConcurrencyRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::PutFunctionConcurrencyRequest*
class CORDL_TYPE PutFunctionConcurrencyRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_ReservedConcurrentExecutions, put = set_ReservedConcurrentExecutions)) int32_t ReservedConcurrentExecutions;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _reservedConcurrentExecutions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__reservedConcurrentExecutions, put = __cordl_internal_set__reservedConcurrentExecutions))::System::Nullable_1<int32_t> _reservedConcurrentExecutions;

  /// @brief Method IsSetFunctionName, addr 0x2bcfd28, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetReservedConcurrentExecutions, addr 0x2bcfddc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetReservedConcurrentExecutions();

  static inline ::Amazon::Lambda::Model::PutFunctionConcurrencyRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__reservedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__reservedConcurrentExecutions();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__reservedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bcfe18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x2bcfd18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_ReservedConcurrentExecutions, addr 0x2bcfd38, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ReservedConcurrentExecutions();

  /// @brief Method set_FunctionName, addr 0x2bcfd20, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_ReservedConcurrentExecutions, addr 0x2bcfd74, size 0x68, virtual false, abstract: false, final false
  inline void set_ReservedConcurrentExecutions(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PutFunctionConcurrencyRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionConcurrencyRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PutFunctionConcurrencyRequest(PutFunctionConcurrencyRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PutFunctionConcurrencyRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PutFunctionConcurrencyRequest(PutFunctionConcurrencyRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _reservedConcurrentExecutions, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____reservedConcurrentExecutions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::PutFunctionConcurrencyRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutFunctionConcurrencyRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::PutFunctionConcurrencyRequest, ____reservedConcurrentExecutions) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::PutFunctionConcurrencyRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::PutFunctionConcurrencyRequest*, "Amazon.Lambda.Model", "PutFunctionConcurrencyRequest");
