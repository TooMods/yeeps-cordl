#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SourceTableFeatureDetails)
namespace Amazon::DynamoDBv2::Model {
class GlobalSecondaryIndexInfo;
}
namespace Amazon::DynamoDBv2::Model {
class LocalSecondaryIndexInfo;
}
namespace Amazon::DynamoDBv2::Model {
class SSEDescription;
}
namespace Amazon::DynamoDBv2::Model {
class StreamSpecification;
}
namespace Amazon::DynamoDBv2::Model {
class TimeToLiveDescription;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class SourceTableFeatureDetails;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails);
// Type: Amazon.DynamoDBv2.Model::SourceTableFeatureDetails
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::SourceTableFeatureDetails*
class CORDL_TYPE SourceTableFeatureDetails : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_GlobalSecondaryIndexes,
                      put = set_GlobalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* GlobalSecondaryIndexes;

  __declspec(property(get = get_LocalSecondaryIndexes,
                      put = set_LocalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* LocalSecondaryIndexes;

  __declspec(property(get = get_SSEDescription, put = set_SSEDescription))::Amazon::DynamoDBv2::Model::SSEDescription* SSEDescription;

  __declspec(property(get = get_StreamDescription, put = set_StreamDescription))::Amazon::DynamoDBv2::Model::StreamSpecification* StreamDescription;

  __declspec(property(get = get_TimeToLiveDescription, put = set_TimeToLiveDescription))::Amazon::DynamoDBv2::Model::TimeToLiveDescription* TimeToLiveDescription;

  /// @brief Field _globalSecondaryIndexes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__globalSecondaryIndexes,
                      put = __cordl_internal_set__globalSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* _globalSecondaryIndexes;

  /// @brief Field _localSecondaryIndexes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localSecondaryIndexes,
                      put = __cordl_internal_set__localSecondaryIndexes))::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* _localSecondaryIndexes;

  /// @brief Field _sseDescription, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sseDescription, put = __cordl_internal_set__sseDescription))::Amazon::DynamoDBv2::Model::SSEDescription* _sseDescription;

  /// @brief Field _streamDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__streamDescription, put = __cordl_internal_set__streamDescription))::Amazon::DynamoDBv2::Model::StreamSpecification* _streamDescription;

  /// @brief Field _timeToLiveDescription, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__timeToLiveDescription, put = __cordl_internal_set__timeToLiveDescription))::Amazon::DynamoDBv2::Model::TimeToLiveDescription* _timeToLiveDescription;

  /// @brief Method IsSetGlobalSecondaryIndexes, addr 0x105143c, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetGlobalSecondaryIndexes();

  /// @brief Method IsSetLocalSecondaryIndexes, addr 0x10514a0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetLocalSecondaryIndexes();

  /// @brief Method IsSetSSEDescription, addr 0x1051504, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetSSEDescription();

  /// @brief Method IsSetStreamDescription, addr 0x1051524, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetStreamDescription();

  /// @brief Method IsSetTimeToLiveDescription, addr 0x1051544, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetTimeToLiveDescription();

  static inline ::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*& __cordl_internal_get__globalSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>*> const&
  __cordl_internal_get__globalSecondaryIndexes() const;

  constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*& __cordl_internal_get__localSecondaryIndexes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>*> const&
  __cordl_internal_get__localSecondaryIndexes() const;

  constexpr ::Amazon::DynamoDBv2::Model::SSEDescription*& __cordl_internal_get__sseDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSEDescription*> const& __cordl_internal_get__sseDescription() const;

  constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& __cordl_internal_get__streamDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const& __cordl_internal_get__streamDescription() const;

  constexpr ::Amazon::DynamoDBv2::Model::TimeToLiveDescription*& __cordl_internal_get__timeToLiveDescription();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*> const& __cordl_internal_get__timeToLiveDescription() const;

  constexpr void __cordl_internal_set__globalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* value);

  constexpr void __cordl_internal_set__localSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* value);

  constexpr void __cordl_internal_set__sseDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value);

  constexpr void __cordl_internal_set__streamDescription(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  constexpr void __cordl_internal_set__timeToLiveDescription(::Amazon::DynamoDBv2::Model::TimeToLiveDescription* value);

  /// @brief Method .ctor, addr 0x1051554, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GlobalSecondaryIndexes, addr 0x105142c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* get_GlobalSecondaryIndexes();

  /// @brief Method get_LocalSecondaryIndexes, addr 0x1051490, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* get_LocalSecondaryIndexes();

  /// @brief Method get_SSEDescription, addr 0x10514f4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::SSEDescription* get_SSEDescription();

  /// @brief Method get_StreamDescription, addr 0x1051514, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::StreamSpecification* get_StreamDescription();

  /// @brief Method get_TimeToLiveDescription, addr 0x1051534, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::Model::TimeToLiveDescription* get_TimeToLiveDescription();

  /// @brief Method set_GlobalSecondaryIndexes, addr 0x1051434, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* value);

  /// @brief Method set_LocalSecondaryIndexes, addr 0x1051498, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* value);

  /// @brief Method set_SSEDescription, addr 0x10514fc, size 0x8, virtual false, abstract: false, final false
  inline void set_SSEDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value);

  /// @brief Method set_StreamDescription, addr 0x105151c, size 0x8, virtual false, abstract: false, final false
  inline void set_StreamDescription(::Amazon::DynamoDBv2::Model::StreamSpecification* value);

  /// @brief Method set_TimeToLiveDescription, addr 0x105153c, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeToLiveDescription(::Amazon::DynamoDBv2::Model::TimeToLiveDescription* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceTableFeatureDetails();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SourceTableFeatureDetails", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SourceTableFeatureDetails(SourceTableFeatureDetails&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SourceTableFeatureDetails", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SourceTableFeatureDetails(SourceTableFeatureDetails const&) = delete;

  /// @brief Field _globalSecondaryIndexes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexInfo*>* ____globalSecondaryIndexes;

  /// @brief Field _localSecondaryIndexes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexInfo*>* ____localSecondaryIndexes;

  /// @brief Field _sseDescription, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::SSEDescription* ____sseDescription;

  /// @brief Field _streamDescription, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::StreamSpecification* ____streamDescription;

  /// @brief Field _timeToLiveDescription, offset: 0x30, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::TimeToLiveDescription* ____timeToLiveDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails, ____globalSecondaryIndexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails, ____localSecondaryIndexes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails, ____sseDescription) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails, ____streamDescription) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails, ____timeToLiveDescription) == 0x30, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::SourceTableFeatureDetails*, "Amazon.DynamoDBv2.Model", "SourceTableFeatureDetails");
