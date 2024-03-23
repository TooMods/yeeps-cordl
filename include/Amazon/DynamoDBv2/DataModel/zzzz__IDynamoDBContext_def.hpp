#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IDynamoDBContext)
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class AsyncSearch_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class BatchGet_1;
}
namespace Amazon::DynamoDBv2::DataModel {
class BatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class BatchWrite_1;
}
namespace Amazon::DynamoDBv2::DataModel {
class BatchWrite;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBOperationConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchGet;
}
namespace Amazon::DynamoDBv2::DataModel {
class MultiTableBatchWrite;
}
namespace Amazon::DynamoDBv2::DataModel {
class ScanCondition;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class QueryOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
struct QueryOperator;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class ScanOperationConfig;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Table;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
class IDynamoDBContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::IDynamoDBContext);
// Type: Amazon.DynamoDBv2.DataModel::IDynamoDBContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::IDynamoDBContext*
class CORDL_TYPE IDynamoDBContext {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateBatchGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchGet_1<T>* CreateBatchGet(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method CreateBatchWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::BatchWrite_1<T>* CreateBatchWrite(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method CreateMultiTableBatchGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchGet*
  CreateMultiTableBatchGet(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches);

  /// @brief Method CreateMultiTableBatchWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
  CreateMultiTableBatchWrite(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task* DeleteAsync(T value, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method DeleteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* DeleteAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteBatchGetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* ExecuteBatchGetAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchGet*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchGet*>*> batches,
                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ExecuteBatchWriteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* ExecuteBatchWriteAsync(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches,
                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method FromDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline T FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document);

  /// @brief Method FromDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline T FromDocument(::Amazon::DynamoDBv2::DocumentModel::Document* document, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromDocuments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Collections::Generic::IEnumerable_1<T>* FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents);

  /// @brief Method FromDocuments, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Collections::Generic::IEnumerable_1<T>* FromDocuments(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* documents,
                                                                         ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromQueryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* FromQueryAsync(::Amazon::DynamoDBv2::DocumentModel::QueryOperationConfig* queryConfig,
                                                                           ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method FromScanAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* FromScanAsync(::Amazon::DynamoDBv2::DocumentModel::ScanOperationConfig* scanConfig,
                                                                          ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method GetTargetTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Table* GetTargetTable(::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(::System::Object* hashKey, ::System::Object* rangeKey, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(T keyObject, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task_1<T>* LoadAsync(T keyObject, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig,
                                                          ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method QueryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* QueryAsync(::System::Object* hashKeyValue, ::Amazon::DynamoDBv2::DocumentModel::QueryOperator op,
                                                                       ::System::Collections::Generic::IEnumerable_1<::System::Object*>* values,
                                                                       ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method QueryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* QueryAsync(::System::Object* hashKeyValue, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method SaveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::System::Threading::Tasks::Task* SaveAsync(T value, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SaveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::System::Threading::Tasks::Task* SaveAsync(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ScanAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
  inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* ScanAsync(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DataModel::ScanCondition*>* conditions,
                                                                      ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Method ToDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Document* ToDocument(T value);

  /// @brief Method ToDocument, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::Document* ToDocument(T value, ::Amazon::DynamoDBv2::DataModel::DynamoDBOperationConfig* operationConfig);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDynamoDBContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDynamoDBContext(IDynamoDBContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDynamoDBContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamoDBContext(IDynamoDBContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
NEED_NO_BOX(::Amazon::DynamoDBv2::DataModel::IDynamoDBContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*, "Amazon.DynamoDBv2.DataModel", "IDynamoDBContext");
