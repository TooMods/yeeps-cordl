#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KinesisDataStreamDestination)
namespace Amazon::DynamoDBv2 {
class DestinationStatus;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class KinesisDataStreamDestination;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination);
// Type: Amazon.DynamoDBv2.Model::KinesisDataStreamDestination
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::KinesisDataStreamDestination*
class CORDL_TYPE KinesisDataStreamDestination : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DestinationStatus, put = set_DestinationStatus))::Amazon::DynamoDBv2::DestinationStatus* DestinationStatus;

  __declspec(property(get = get_DestinationStatusDescription, put = set_DestinationStatusDescription))::StringW DestinationStatusDescription;

  __declspec(property(get = get_StreamArn, put = set_StreamArn))::StringW StreamArn;

  /// @brief Field _destinationStatus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationStatus, put = __cordl_internal_set__destinationStatus))::Amazon::DynamoDBv2::DestinationStatus* _destinationStatus;

  /// @brief Field _destinationStatusDescription, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationStatusDescription, put = __cordl_internal_set__destinationStatusDescription))::StringW _destinationStatusDescription;

  /// @brief Field _streamArn, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__streamArn, put = __cordl_internal_set__streamArn))::StringW _streamArn;

  /// @brief Method IsSetDestinationStatus, addr 0x104a534, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetDestinationStatus();

  /// @brief Method IsSetDestinationStatusDescription, addr 0x104a5a4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDestinationStatusDescription();

  /// @brief Method IsSetStreamArn, addr 0x104a5c4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamArn();

  static inline ::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination* New_ctor();

  constexpr ::Amazon::DynamoDBv2::DestinationStatus*& __cordl_internal_get__destinationStatus();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DestinationStatus*> const& __cordl_internal_get__destinationStatus() const;

  constexpr ::StringW const& __cordl_internal_get__destinationStatusDescription() const;

  constexpr ::StringW& __cordl_internal_get__destinationStatusDescription();

  constexpr ::StringW const& __cordl_internal_get__streamArn() const;

  constexpr ::StringW& __cordl_internal_get__streamArn();

  constexpr void __cordl_internal_set__destinationStatus(::Amazon::DynamoDBv2::DestinationStatus* value);

  constexpr void __cordl_internal_set__destinationStatusDescription(::StringW value);

  constexpr void __cordl_internal_set__streamArn(::StringW value);

  /// @brief Method .ctor, addr 0x104a5d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DestinationStatus, addr 0x104a524, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DestinationStatus* get_DestinationStatus();

  /// @brief Method get_DestinationStatusDescription, addr 0x104a594, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DestinationStatusDescription();

  /// @brief Method get_StreamArn, addr 0x104a5b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StreamArn();

  /// @brief Method set_DestinationStatus, addr 0x104a52c, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationStatus(::Amazon::DynamoDBv2::DestinationStatus* value);

  /// @brief Method set_DestinationStatusDescription, addr 0x104a59c, size 0x8, virtual false, abstract: false, final false
  inline void set_DestinationStatusDescription(::StringW value);

  /// @brief Method set_StreamArn, addr 0x104a5bc, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamArn(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KinesisDataStreamDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KinesisDataStreamDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KinesisDataStreamDestination(KinesisDataStreamDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KinesisDataStreamDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KinesisDataStreamDestination(KinesisDataStreamDestination const&) = delete;

  /// @brief Field _destinationStatus, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DestinationStatus* ____destinationStatus;

  /// @brief Field _destinationStatusDescription, offset: 0x18, size: 0x8, def value: None
  ::StringW ____destinationStatusDescription;

  /// @brief Field _streamArn, offset: 0x20, size: 0x8, def value: None
  ::StringW ____streamArn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination, ____destinationStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination, ____destinationStatusDescription) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination, ____streamArn) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::KinesisDataStreamDestination*, "Amazon.DynamoDBv2.Model", "KinesisDataStreamDestination");
