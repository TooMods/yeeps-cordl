#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProvisionedConcurrencyConfigListItem)
namespace Amazon::Lambda {
class ProvisionedConcurrencyStatusEnum;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ProvisionedConcurrencyConfigListItem;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem);
// Type: Amazon.Lambda.Model::ProvisionedConcurrencyConfigListItem
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ProvisionedConcurrencyConfigListItem*
class CORDL_TYPE ProvisionedConcurrencyConfigListItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllocatedProvisionedConcurrentExecutions, put = set_AllocatedProvisionedConcurrentExecutions)) int32_t AllocatedProvisionedConcurrentExecutions;

  __declspec(property(get = get_AvailableProvisionedConcurrentExecutions, put = set_AvailableProvisionedConcurrentExecutions)) int32_t AvailableProvisionedConcurrentExecutions;

  __declspec(property(get = get_FunctionArn, put = set_FunctionArn))::StringW FunctionArn;

  __declspec(property(get = get_LastModified, put = set_LastModified))::StringW LastModified;

  __declspec(property(get = get_RequestedProvisionedConcurrentExecutions, put = set_RequestedProvisionedConcurrentExecutions)) int32_t RequestedProvisionedConcurrentExecutions;

  __declspec(property(get = get_Status, put = set_Status))::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Status;

  __declspec(property(get = get_StatusReason, put = set_StatusReason))::StringW StatusReason;

  /// @brief Field _allocatedProvisionedConcurrentExecutions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__allocatedProvisionedConcurrentExecutions,
                      put = __cordl_internal_set__allocatedProvisionedConcurrentExecutions))::System::Nullable_1<int32_t> _allocatedProvisionedConcurrentExecutions;

  /// @brief Field _availableProvisionedConcurrentExecutions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__availableProvisionedConcurrentExecutions,
                      put = __cordl_internal_set__availableProvisionedConcurrentExecutions))::System::Nullable_1<int32_t> _availableProvisionedConcurrentExecutions;

  /// @brief Field _functionArn, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__functionArn, put = __cordl_internal_set__functionArn))::StringW _functionArn;

  /// @brief Field _lastModified, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastModified, put = __cordl_internal_set__lastModified))::StringW _lastModified;

  /// @brief Field _requestedProvisionedConcurrentExecutions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__requestedProvisionedConcurrentExecutions,
                      put = __cordl_internal_set__requestedProvisionedConcurrentExecutions))::System::Nullable_1<int32_t> _requestedProvisionedConcurrentExecutions;

  /// @brief Field _status, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status))::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* _status;

  /// @brief Field _statusReason, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__statusReason, put = __cordl_internal_set__statusReason))::StringW _statusReason;

  /// @brief Method IsSetAllocatedProvisionedConcurrentExecutions, addr 0x2bcebb0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetAllocatedProvisionedConcurrentExecutions();

  /// @brief Method IsSetAvailableProvisionedConcurrentExecutions, addr 0x2bcec90, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetAvailableProvisionedConcurrentExecutions();

  /// @brief Method IsSetFunctionArn, addr 0x2bcecdc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionArn();

  /// @brief Method IsSetLastModified, addr 0x2bcecfc, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetLastModified();

  /// @brief Method IsSetRequestedProvisionedConcurrentExecutions, addr 0x2bcedb0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetRequestedProvisionedConcurrentExecutions();

  /// @brief Method IsSetStatus, addr 0x2bcedfc, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetStatus();

  /// @brief Method IsSetStatusReason, addr 0x2bcee6c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStatusReason();

  static inline ::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem* New_ctor();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__allocatedProvisionedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__allocatedProvisionedConcurrentExecutions();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__availableProvisionedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__availableProvisionedConcurrentExecutions();

  constexpr ::StringW const& __cordl_internal_get__functionArn() const;

  constexpr ::StringW& __cordl_internal_get__functionArn();

  constexpr ::StringW const& __cordl_internal_get__lastModified() const;

  constexpr ::StringW& __cordl_internal_get__lastModified();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__requestedProvisionedConcurrentExecutions() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__requestedProvisionedConcurrentExecutions();

  constexpr ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*& __cordl_internal_get__status();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*> const& __cordl_internal_get__status() const;

  constexpr ::StringW const& __cordl_internal_get__statusReason() const;

  constexpr ::StringW& __cordl_internal_get__statusReason();

  constexpr void __cordl_internal_set__allocatedProvisionedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__availableProvisionedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__functionArn(::StringW value);

  constexpr void __cordl_internal_set__lastModified(::StringW value);

  constexpr void __cordl_internal_set__requestedProvisionedConcurrentExecutions(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__status(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value);

  constexpr void __cordl_internal_set__statusReason(::StringW value);

  /// @brief Method .ctor, addr 0x2bcee7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllocatedProvisionedConcurrentExecutions, addr 0x2bceb0c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_AllocatedProvisionedConcurrentExecutions();

  /// @brief Method get_AvailableProvisionedConcurrentExecutions, addr 0x2bcebec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_AvailableProvisionedConcurrentExecutions();

  /// @brief Method get_FunctionArn, addr 0x2bceccc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionArn();

  /// @brief Method get_LastModified, addr 0x2bcecec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LastModified();

  /// @brief Method get_RequestedProvisionedConcurrentExecutions, addr 0x2bced0c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_RequestedProvisionedConcurrentExecutions();

  /// @brief Method get_Status, addr 0x2bcedec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* get_Status();

  /// @brief Method get_StatusReason, addr 0x2bcee5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StatusReason();

  /// @brief Method set_AllocatedProvisionedConcurrentExecutions, addr 0x2bceb48, size 0x68, virtual false, abstract: false, final false
  inline void set_AllocatedProvisionedConcurrentExecutions(int32_t value);

  /// @brief Method set_AvailableProvisionedConcurrentExecutions, addr 0x2bcec28, size 0x68, virtual false, abstract: false, final false
  inline void set_AvailableProvisionedConcurrentExecutions(int32_t value);

  /// @brief Method set_FunctionArn, addr 0x2bcecd4, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArn(::StringW value);

  /// @brief Method set_LastModified, addr 0x2bcecf4, size 0x8, virtual false, abstract: false, final false
  inline void set_LastModified(::StringW value);

  /// @brief Method set_RequestedProvisionedConcurrentExecutions, addr 0x2bced48, size 0x68, virtual false, abstract: false, final false
  inline void set_RequestedProvisionedConcurrentExecutions(int32_t value);

  /// @brief Method set_Status, addr 0x2bcedf4, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value);

  /// @brief Method set_StatusReason, addr 0x2bcee64, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusReason(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProvisionedConcurrencyConfigListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyConfigListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProvisionedConcurrencyConfigListItem(ProvisionedConcurrencyConfigListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProvisionedConcurrencyConfigListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProvisionedConcurrencyConfigListItem(ProvisionedConcurrencyConfigListItem const&) = delete;

  /// @brief Field _allocatedProvisionedConcurrentExecutions, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____allocatedProvisionedConcurrentExecutions;

  /// @brief Field _availableProvisionedConcurrentExecutions, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____availableProvisionedConcurrentExecutions;

  /// @brief Field _functionArn, offset: 0x20, size: 0x8, def value: None
  ::StringW ____functionArn;

  /// @brief Field _lastModified, offset: 0x28, size: 0x8, def value: None
  ::StringW ____lastModified;

  /// @brief Field _requestedProvisionedConcurrentExecutions, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____requestedProvisionedConcurrentExecutions;

  /// @brief Field _status, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* ____status;

  /// @brief Field _statusReason, offset: 0x40, size: 0x8, def value: None
  ::StringW ____statusReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____allocatedProvisionedConcurrentExecutions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____availableProvisionedConcurrentExecutions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____functionArn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____lastModified) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____requestedProvisionedConcurrentExecutions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____status) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem, ____statusReason) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*, "Amazon.Lambda.Model", "ProvisionedConcurrencyConfigListItem");
