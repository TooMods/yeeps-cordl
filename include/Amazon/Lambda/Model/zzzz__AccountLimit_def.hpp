#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccountLimit)
// Forward declare root types
namespace Amazon::Lambda::Model {
class AccountLimit;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::AccountLimit);
// Type: Amazon.Lambda.Model::AccountLimit
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::AccountLimit*
class CORDL_TYPE AccountLimit : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CodeSizeUnzipped, put = set_CodeSizeUnzipped)) int64_t CodeSizeUnzipped;

  __declspec(property(get = get_CodeSizeZipped, put = set_CodeSizeZipped)) int64_t CodeSizeZipped;

  __declspec(property(get = get_ConcurrentExecutions, put = set_ConcurrentExecutions)) int32_t ConcurrentExecutions;

  __declspec(property(get = get_TotalCodeSize, put = set_TotalCodeSize)) int64_t TotalCodeSize;

  __declspec(property(get = get_UnreservedConcurrentExecutions, put = set_UnreservedConcurrentExecutions)) int32_t UnreservedConcurrentExecutions;

  /// @brief Field _codeSizeUnzipped, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__codeSizeUnzipped, put = __cordl_internal_set__codeSizeUnzipped))::System::Nullable_1<int64_t> _codeSizeUnzipped;

  /// @brief Field _codeSizeZipped, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__codeSizeZipped, put = __cordl_internal_set__codeSizeZipped))::System::Nullable_1<int64_t> _codeSizeZipped;

  /// @brief Field _concurrentExecutions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__concurrentExecutions, put = __cordl_internal_set__concurrentExecutions))::System::Nullable_1<int32_t> _concurrentExecutions;

  /// @brief Field _totalCodeSize, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__totalCodeSize, put = __cordl_internal_set__totalCodeSize))::System::Nullable_1<int64_t> _totalCodeSize;

  /// @brief Field _unreservedConcurrentExecutions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__unreservedConcurrentExecutions,
                      put = __cordl_internal_set__unreservedConcurrentExecutions))::System::Nullable_1<int32_t> _unreservedConcurrentExecutions;

  /// @brief Method IsSetCodeSizeUnzipped, addr 0x2bc3b28, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCodeSizeUnzipped();

  /// @brief Method IsSetCodeSizeZipped, addr 0x2bc3c10, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetCodeSizeZipped();

  /// @brief Method IsSetConcurrentExecutions, addr 0x2bc3cf0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetConcurrentExecutions();

  /// @brief Method IsSetTotalCodeSize, addr 0x2bc3dd8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetTotalCodeSize();

  /// @brief Method IsSetUnreservedConcurrentExecutions, addr 0x2bc3eb8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetUnreservedConcurrentExecutions();

  static inline ::Amazon::Lambda::Model::AccountLimit* New_ctor();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__codeSizeUnzipped() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__codeSizeUnzipped();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__codeSizeZipped() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__codeSizeZipped();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__concurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__concurrentExecutions();

  constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__totalCodeSize() const;

  constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__totalCodeSize();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__unreservedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__unreservedConcurrentExecutions();

  constexpr void __cordl_internal_set__codeSizeUnzipped(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__codeSizeZipped(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__concurrentExecutions(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__totalCodeSize(::System::Nullable_1<int64_t> value);

  constexpr void __cordl_internal_set__unreservedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bc3ef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSizeUnzipped, addr 0x2bc3a7c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_CodeSizeUnzipped();

  /// @brief Method get_CodeSizeZipped, addr 0x2bc3b64, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_CodeSizeZipped();

  /// @brief Method get_ConcurrentExecutions, addr 0x2bc3c4c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_ConcurrentExecutions();

  /// @brief Method get_TotalCodeSize, addr 0x2bc3d2c, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_TotalCodeSize();

  /// @brief Method get_UnreservedConcurrentExecutions, addr 0x2bc3e14, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_UnreservedConcurrentExecutions();

  /// @brief Method set_CodeSizeUnzipped, addr 0x2bc3ab8, size 0x70, virtual false, abstract: false, final false
  inline void set_CodeSizeUnzipped(int64_t value);

  /// @brief Method set_CodeSizeZipped, addr 0x2bc3ba0, size 0x70, virtual false, abstract: false, final false
  inline void set_CodeSizeZipped(int64_t value);

  /// @brief Method set_ConcurrentExecutions, addr 0x2bc3c88, size 0x68, virtual false, abstract: false, final false
  inline void set_ConcurrentExecutions(int32_t value);

  /// @brief Method set_TotalCodeSize, addr 0x2bc3d68, size 0x70, virtual false, abstract: false, final false
  inline void set_TotalCodeSize(int64_t value);

  /// @brief Method set_UnreservedConcurrentExecutions, addr 0x2bc3e50, size 0x68, virtual false, abstract: false, final false
  inline void set_UnreservedConcurrentExecutions(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountLimit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountLimit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountLimit(AccountLimit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountLimit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountLimit(AccountLimit const&) = delete;

  /// @brief Field _codeSizeUnzipped, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____codeSizeUnzipped;

  /// @brief Field _codeSizeZipped, offset: 0x20, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____codeSizeZipped;

  /// @brief Field _concurrentExecutions, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____concurrentExecutions;

  /// @brief Field _totalCodeSize, offset: 0x38, size: 0x10, def value: None
  ::System::Nullable_1<int64_t> ____totalCodeSize;

  /// @brief Field _unreservedConcurrentExecutions, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____unreservedConcurrentExecutions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::AccountLimit, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountLimit, ____codeSizeUnzipped) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountLimit, ____codeSizeZipped) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountLimit, ____concurrentExecutions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountLimit, ____totalCodeSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::AccountLimit, ____unreservedConcurrentExecutions) == 0x48, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::AccountLimit);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::AccountLimit*, "Amazon.Lambda.Model", "AccountLimit");
