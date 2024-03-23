#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(KinesisActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class KinesisActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::KinesisActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::KinesisActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::KinesisActionIdentifiers*
class CORDL_TYPE KinesisActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllKinesisActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllKinesisActions, put = setStaticF_AllKinesisActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllKinesisActions;

  /// @brief Field CreateStream, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateStream, put = setStaticF_CreateStream))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateStream;

  /// @brief Field DeleteStream, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteStream, put = setStaticF_DeleteStream))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteStream;

  /// @brief Field DescribeStream, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStream, put = setStaticF_DescribeStream))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStream;

  /// @brief Field GetRecords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetRecords, put = setStaticF_GetRecords))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetRecords;

  /// @brief Field GetShardIterator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetShardIterator, put = setStaticF_GetShardIterator))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetShardIterator;

  /// @brief Field ListStreams, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListStreams, put = setStaticF_ListStreams))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListStreams;

  /// @brief Field MergeShards, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MergeShards, put = setStaticF_MergeShards))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* MergeShards;

  /// @brief Field PutRecord, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutRecord, put = setStaticF_PutRecord))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutRecord;

  /// @brief Field SplitShard, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SplitShard, put = setStaticF_SplitShard))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SplitShard;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllKinesisActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateStream();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteStream();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStream();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetRecords();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetShardIterator();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListStreams();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_MergeShards();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutRecord();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SplitShard();

  static inline void setStaticF_AllKinesisActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateStream(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteStream(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStream(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetRecords(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetShardIterator(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListStreams(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_MergeShards(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutRecord(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SplitShard(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KinesisActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KinesisActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KinesisActionIdentifiers(KinesisActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KinesisActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KinesisActionIdentifiers(KinesisActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::KinesisActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::KinesisActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::KinesisActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "KinesisActionIdentifiers");
