#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncSearch_1)
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBContext;
}
namespace Amazon::DynamoDBv2::DataModel {
class DynamoDBFlatConfig;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __AsyncSearch_1___GetNextSetAsync_d__15;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __AsyncSearch_1___GetRemainingAsync_d__16;
}
namespace Amazon::DynamoDBv2::DataModel {
class __DynamoDBContext__ContextSearch;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2::DocumentModel {
class Search;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> class AsyncSearch_1;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __AsyncSearch_1___GetNextSetAsync_d__15;
}
namespace Amazon::DynamoDBv2::DataModel {
template <typename T> struct __AsyncSearch_1___GetRemainingAsync_d__16;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::DataModel::AsyncSearch_1);
MARK_GEN_VAL_T(::Amazon::DynamoDBv2::DataModel::__AsyncSearch_1___GetNextSetAsync_d__15);
MARK_GEN_VAL_T(::Amazon::DynamoDBv2::DataModel::__AsyncSearch_1___GetRemainingAsync_d__16);
// Type: ::<GetNextSetAsync>d__15
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::AsyncSearch`1::<GetNextSetAsync>d__15<T>
struct CORDL_TYPE __AsyncSearch_1___GetNextSetAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSearch_1___GetNextSetAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<T>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>", modifiers: "",
  // def_value: None }]
  constexpr __AsyncSearch_1___GetNextSetAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<T>*> __t__builder,
      ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<T>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: ::<GetRemainingAsync>d__16
// SizeInfo { instance_size: 64, native_size: 80, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::AsyncSearch`1::<GetRemainingAsync>d__16<T>
struct CORDL_TYPE __AsyncSearch_1___GetRemainingAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSearch_1___GetRemainingAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<T>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>", modifiers: "",
  // def_value: None }]
  constexpr __AsyncSearch_1___GetRemainingAsync_d__16(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<T>*> __t__builder,
      ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* __4__this, ::System::Threading::CancellationToken cancellationToken,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<T>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
// Type: Amazon.DynamoDBv2.DataModel::AsyncSearch`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::DataModel {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.DataModel::AsyncSearch`1<T>*
class CORDL_TYPE AsyncSearch_1 : public ::System::Object {
public:
  // Declarations
  using _GetNextSetAsync_d__15 = ::Amazon::DynamoDBv2::DataModel::__AsyncSearch_1___GetNextSetAsync_d__15<T>;

  using _GetRemainingAsync_d__16 = ::Amazon::DynamoDBv2::DataModel::__AsyncSearch_1___GetRemainingAsync_d__16<T>;

  __declspec(property(get = get_Config, put = set_Config))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* Config;

  __declspec(property(get = get_DocumentSearch, put = set_DocumentSearch))::Amazon::DynamoDBv2::DocumentModel::Search* DocumentSearch;

  __declspec(property(get = get_IsDone)) bool IsDone;

  __declspec(property(get = get_SourceContext, put = set_SourceContext))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* SourceContext;

  /// @brief Field <Config>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Config_k__BackingField,
                      put = __cordl_internal_set__Config_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* _Config_k__BackingField;

  /// @brief Field <DocumentSearch>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__DocumentSearch_k__BackingField,
                      put = __cordl_internal_set__DocumentSearch_k__BackingField))::Amazon::DynamoDBv2::DocumentModel::Search* _DocumentSearch_k__BackingField;

  /// @brief Field <SourceContext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__SourceContext_k__BackingField,
                      put = __cordl_internal_set__SourceContext_k__BackingField))::Amazon::DynamoDBv2::DataModel::DynamoDBContext* _SourceContext_k__BackingField;

  /// @brief Method GetNextSetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<T>*>* GetNextSetAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetRemainingAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<T>*>* GetRemainingAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::DynamoDBv2::DataModel::AsyncSearch_1<T>* New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* source,
                                                                            ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* contextSearch);

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& __cordl_internal_get__Config_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const& __cordl_internal_get__Config_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DocumentModel::Search*& __cordl_internal_get__DocumentSearch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Search*> const& __cordl_internal_get__DocumentSearch_k__BackingField() const;

  constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& __cordl_internal_get__SourceContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& __cordl_internal_get__SourceContext_k__BackingField() const;

  constexpr void __cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  constexpr void __cordl_internal_set__DocumentSearch_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Search* value);

  constexpr void __cordl_internal_set__SourceContext_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* source, ::Amazon::DynamoDBv2::DataModel::__DynamoDBContext__ContextSearch* contextSearch);

  /// @brief Method get_Config, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* get_Config();

  /// @brief Method get_DocumentSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DocumentModel::Search* get_DocumentSearch();

  /// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsDone();

  /// @brief Method get_SourceContext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* get_SourceContext();

  /// @brief Method set_Config, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Config(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value);

  /// @brief Method set_DocumentSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_DocumentSearch(::Amazon::DynamoDBv2::DocumentModel::Search* value);

  /// @brief Method set_SourceContext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_SourceContext(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSearch_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSearch_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSearch_1(AsyncSearch_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSearch_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSearch_1(AsyncSearch_1 const&) = delete;

  /// @brief Field <DocumentSearch>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DocumentModel::Search* ____DocumentSearch_k__BackingField;

  /// @brief Field <SourceContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* ____SourceContext_k__BackingField;

  /// @brief Field <Config>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* ____Config_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::DataModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::DataModel::AsyncSearch_1, "Amazon.DynamoDBv2.DataModel", "AsyncSearch`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::DynamoDBv2::DataModel::__AsyncSearch_1___GetNextSetAsync_d__15, "Amazon.DynamoDBv2.DataModel", "AsyncSearch`1/<GetNextSetAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Amazon::DynamoDBv2::DataModel::__AsyncSearch_1___GetRemainingAsync_d__16, "Amazon.DynamoDBv2.DataModel", "AsyncSearch`1/<GetRemainingAsync>d__16");
