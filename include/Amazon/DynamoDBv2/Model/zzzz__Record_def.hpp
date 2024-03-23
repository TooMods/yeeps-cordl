#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Record)
namespace Amazon::DynamoDBv2::Model {
class Identity;
}
namespace Amazon::DynamoDBv2::Model {
class StreamRecord;
}
namespace Amazon::DynamoDBv2 {
class OperationType;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class Record;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::Record);
// Type: Amazon.DynamoDBv2.Model::Record
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::Record*
class CORDL_TYPE Record : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AwsRegion, put = set_AwsRegion))::StringW AwsRegion;

  __declspec(property(get = get_Dynamodb, put = set_Dynamodb))::Amazon::DynamoDBv2::Model::StreamRecord* Dynamodb;

  __declspec(property(get = get_EventID, put = set_EventID))::StringW EventID;

  __declspec(property(get = get_EventName, put = set_EventName))::Amazon::DynamoDBv2::OperationType* EventName;

  __declspec(property(get = get_EventSource, put = set_EventSource))::StringW EventSource;

  __declspec(property(get = get_EventVersion, put = set_EventVersion))::StringW EventVersion;

  __declspec(property(get = get_UserIdentity, put = set_UserIdentity))::Amazon::DynamoDBv2::Model::Identity* UserIdentity;

  /// @brief Field _awsRegion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__awsRegion, put = __cordl_internal_set__awsRegion))::StringW _awsRegion;

  /// @brief Field _dynamodb, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dynamodb, put = __cordl_internal_set__dynamodb))::Amazon::DynamoDBv2::Model::StreamRecord* _dynamodb;

  /// @brief Field _eventName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__eventName, put = __cordl_internal_set__eventName))::Amazon::DynamoDBv2::OperationType* _eventName;

  /// @brief Field _eventSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSource, put = __cordl_internal_set__eventSource))::StringW _eventSource;

  /// @brief Field _eventVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__eventVersion, put = __cordl_internal_set__eventVersion))::StringW _eventVersion;

  /// @brief Field _eventid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__eventid, put = __cordl_internal_set__eventid))::StringW _eventid;

  /// @brief Field _userIdentity, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__userIdentity, put = __cordl_internal_set__userIdentity))::Amazon::DynamoDBv2::Model::Identity* _userIdentity;

  /// @brief Method IsSetAwsRegion, addr 0x104e470, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetAwsRegion();

  /// @brief Method IsSetDynamodb, addr 0x104e490, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetDynamodb();

  /// @brief Method IsSetEventID, addr 0x104e4b0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventID();

  /// @brief Method IsSetEventName, addr 0x104e4d0, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetEventName();

  /// @brief Method IsSetEventSource, addr 0x104e540, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventSource();

  /// @brief Method IsSetEventVersion, addr 0x104e560, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventVersion();

  /// @brief Method IsSetUserIdentity, addr 0x104e580, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetUserIdentity();

  static inline ::Amazon::DynamoDBv2::Model::Record* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__awsRegion() const;

  constexpr ::StringW& __cordl_internal_get__awsRegion();

  constexpr ::Amazon::DynamoDBv2::Model::StreamRecord*& __cordl_internal_get__dynamodb();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamRecord*> const& __cordl_internal_get__dynamodb() const;

  constexpr ::Amazon::DynamoDBv2::OperationType*& __cordl_internal_get__eventName();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::OperationType*> const& __cordl_internal_get__eventName() const;

  constexpr ::StringW const& __cordl_internal_get__eventSource() const;

  constexpr ::StringW& __cordl_internal_get__eventSource();

  constexpr ::StringW const& __cordl_internal_get__eventVersion() const;

  constexpr ::StringW& __cordl_internal_get__eventVersion();

  constexpr ::StringW const& __cordl_internal_get__eventid() const;

  constexpr ::StringW& __cordl_internal_get__eventid();

  constexpr ::Amazon::DynamoDBv2::Model::Identity*& __cordl_internal_get__userIdentity();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Identity*> const& __cordl_internal_get__userIdentity() const;

  constexpr void __cordl_internal_set__awsRegion(::StringW value);

  constexpr void __cordl_internal_set__dynamodb(::Amazon::DynamoDBv2::Model::StreamRecord* value);

  constexpr void __cordl_internal_set__eventName(::Amazon::DynamoDBv2::OperationType* value);

  constexpr void __cordl_internal_set__eventSource(::StringW value);

  constexpr void __cordl_internal_set__eventVersion(::StringW value);

  constexpr void __cordl_internal_set__eventid(::StringW value);

  constexpr void __cordl_internal_set__userIdentity(::Amazon::DynamoDBv2::Model::Identity* value);

  /// @brief Method .ctor, addr 0x104e590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AwsRegion, addr 0x104e460, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AwsRegion();

  /// @brief Method get_Dynamodb, addr 0x104e480, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::StreamRecord* get_Dynamodb();

  /// @brief Method get_EventID, addr 0x104e4a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventID();

  /// @brief Method get_EventName, addr 0x104e4c0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::OperationType* get_EventName();

  /// @brief Method get_EventSource, addr 0x104e530, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSource();

  /// @brief Method get_EventVersion, addr 0x104e550, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventVersion();

  /// @brief Method get_UserIdentity, addr 0x104e570, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::Identity* get_UserIdentity();

  /// @brief Method set_AwsRegion, addr 0x104e468, size 0x8, virtual false, abstract: false, final false
  inline void set_AwsRegion(::StringW value);

  /// @brief Method set_Dynamodb, addr 0x104e488, size 0x8, virtual false, abstract: false, final false
  inline void set_Dynamodb(::Amazon::DynamoDBv2::Model::StreamRecord* value);

  /// @brief Method set_EventID, addr 0x104e4a8, size 0x8, virtual false, abstract: false, final false
  inline void set_EventID(::StringW value);

  /// @brief Method set_EventName, addr 0x104e4c8, size 0x8, virtual false, abstract: false, final false
  inline void set_EventName(::Amazon::DynamoDBv2::OperationType* value);

  /// @brief Method set_EventSource, addr 0x104e538, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSource(::StringW value);

  /// @brief Method set_EventVersion, addr 0x104e558, size 0x8, virtual false, abstract: false, final false
  inline void set_EventVersion(::StringW value);

  /// @brief Method set_UserIdentity, addr 0x104e578, size 0x8, virtual false, abstract: false, final false
  inline void set_UserIdentity(::Amazon::DynamoDBv2::Model::Identity* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Record();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Record(Record&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Record(Record const&) = delete;

  /// @brief Field _awsRegion, offset: 0x10, size: 0x8, def value: None
  ::StringW ____awsRegion;

  /// @brief Field _dynamodb, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::StreamRecord* ____dynamodb;

  /// @brief Field _eventid, offset: 0x20, size: 0x8, def value: None
  ::StringW ____eventid;

  /// @brief Field _eventName, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::OperationType* ____eventName;

  /// @brief Field _eventSource, offset: 0x30, size: 0x8, def value: None
  ::StringW ____eventSource;

  /// @brief Field _eventVersion, offset: 0x38, size: 0x8, def value: None
  ::StringW ____eventVersion;

  /// @brief Field _userIdentity, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::Identity* ____userIdentity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::Record, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____awsRegion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____dynamodb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____eventid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____eventName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____eventSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____eventVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::Record, ____userIdentity) == 0x40, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::Record);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::Record*, "Amazon.DynamoDBv2.Model", "Record");
