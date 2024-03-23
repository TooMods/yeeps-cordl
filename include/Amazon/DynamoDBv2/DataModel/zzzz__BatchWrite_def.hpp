#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BatchWrite)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class DocumentBatchWrite;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class BatchWrite;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::BatchWrite);
// Type: Amazon.DynamoDBv2.DataModel::BatchWrite
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::BatchWrite*
class CORDL_TYPE BatchWrite : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Config, put = set_Config))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* Config;

  __declspec(property(get = get_Context, put = set_Context))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Context;

  __declspec(property(get = get_DocumentBatch, put = set_DocumentBatch))::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* DocumentBatch;

  /// @brief Field <Config>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField,
                      put = __cordl_internal_set__Config_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _Config_k__BackingField;

  /// @brief Field <Context>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Context_k__BackingField,
                      put = __cordl_internal_set__Context_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* _Context_k__BackingField;

  /// @brief Field <DocumentBatch>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__DocumentBatch_k__BackingField,
                      put = __cordl_internal_set__DocumentBatch_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* _DocumentBatch_k__BackingField;

  /// @brief Method ExecuteAsync, addr 0x1422120, size 0xc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteHelper, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExecuteHelper();

  /// @brief Method ExecuteHelperAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::BatchWrite* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get__Context_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get__Context_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*& __cordl_internal_get__DocumentBatch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*> const& __cordl_internal_get__DocumentBatch_k__BackingField() const;

  constexpr void __cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  constexpr void __cordl_internal_set__Context_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  constexpr void __cordl_internal_set__DocumentBatch_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* value);

  /// @brief Method .ctor, addr 0x14220f4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config);

  /// @brief Method get_Config, addr 0x14220d4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* get_Config();

  /// @brief Method get_Context, addr 0x14220c4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* get_Context();

  /// @brief Method get_DocumentBatch, addr 0x14220e4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* get_DocumentBatch();

  /// @brief Method set_Config, addr 0x14220dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Config(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  /// @brief Method set_Context, addr 0x14220cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  /// @brief Method set_DocumentBatch, addr 0x14220ec, size 0x8, virtual false, abstract: false, final false
  inline void set_DocumentBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchWrite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchWrite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchWrite(BatchWrite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchWrite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchWrite(BatchWrite const&) = delete;

  /// @brief Field <Context>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* ____Context_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* ____Config_k__BackingField;

  /// @brief Field <DocumentBatch>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* ____DocumentBatch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DataModel::BatchWrite, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchWrite, ____Context_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchWrite, ____Config_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::DataModel::BatchWrite, ____DocumentBatch_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::BatchWrite);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::BatchWrite*, "Amazon.DynamoDBv2.DataModel", "BatchWrite");
