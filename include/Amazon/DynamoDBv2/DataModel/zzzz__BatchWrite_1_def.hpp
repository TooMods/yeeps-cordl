#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BatchWrite_1)
namespace Amazon::DynamoDBv2::DataModel {
class BatchWrite;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class ItemStorageConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchWrite;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class BatchWrite_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::BatchWrite_1);
// Type: Amazon.DynamoDBv2.DataModel::BatchWrite`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::BatchWrite`1<T>*
class CORDL_TYPE BatchWrite_1 : public ::Amazon::DynamoDBv2::DataModel::BatchWrite {
public:
  // Declarations
  __declspec(property(get = get_StorageConfig, put = set_StorageConfig))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* StorageConfig;

  /// @brief Field <StorageConfig>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__StorageConfig_k__BackingField,
                      put = __cordl_internal_set__StorageConfig_k__BackingField))::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* _StorageConfig_k__BackingField;

  /// @brief Method AddDeleteItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddDeleteItem(T item);

  /// @brief Method AddDeleteItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddDeleteItems(::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method AddDeleteKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddDeleteKey(::System::Object* hashKey);

  /// @brief Method AddDeleteKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddDeleteKey(::System::Object* hashKey, ::System::Object* rangeKey);

  /// @brief Method AddPutItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddPutItem(T item);

  /// @brief Method AddPutItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddPutItems(::System::Collections::Generic::IEnumerable_1<T>* values);

  /// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite* Combine(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> otherBatches);

  /// @brief Method ExecuteHelper, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& __cordl_internal_get__StorageConfig_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const& __cordl_internal_get__StorageConfig_k__BackingField() const;

  constexpr void __cordl_internal_set__StorageConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  /// @brief Method get_StorageConfig, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* get_StorageConfig();

  /// @brief Method set_StorageConfig, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_StorageConfig(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchWrite_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchWrite_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchWrite_1(BatchWrite_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchWrite_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchWrite_1(BatchWrite_1 const&) = delete;

  /// @brief Field <StorageConfig>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* ____StorageConfig_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DataModel::BatchWrite_1, "Amazon.DynamoDBv2.DataModel", "BatchWrite`1");
