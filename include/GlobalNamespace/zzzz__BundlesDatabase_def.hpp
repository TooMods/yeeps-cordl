#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BundlesDatabase)
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __BundlesDatabase___GetBundleData_d__8;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BundlesDatabase;
}
namespace GlobalNamespace {
struct __BundlesDatabase___GetBundleData_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BundlesDatabase);
MARK_VAL_T(::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8);
// Type: ::<GetBundleData>d__8
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BundlesDatabase::<GetBundleData>d__8
struct CORDL_TYPE __BundlesDatabase___GetBundleData_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x15972b4, size 0x5c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1597874, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundlesDatabase___GetBundleData_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "bundleKey", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value:
  // None }]
  constexpr __BundlesDatabase___GetBundleData_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                                   ::StringW bundleKey, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field bundleKey, offset: 0x20, size: 0x8, def value: None
  ::StringW bundleKey;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8, bundleKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BundlesDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundlesDatabase*
class CORDL_TYPE BundlesDatabase : public ::System::Object {
public:
  // Declarations
  using _GetBundleData_d__8 = ::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8;

  /// @brief Method GetBundleData, addr 0x15971b0, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetBundleData(::StringW bundleKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BundlesDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BundlesDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BundlesDatabase(BundlesDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BundlesDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BundlesDatabase(BundlesDatabase const&) = delete;

  /// @brief Field BUNDLES_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString BUNDLES_TABLE{ u"G2_Bundles" };

  /// @brief Field CENT_COST_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CENT_COST_KEY{ u"centCost" };

  /// @brief Field CURRENCY_AMOUNT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENCY_AMOUNT_KEY{ u"currencyAmount" };

  /// @brief Field DISPLAY_NAME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DISPLAY_NAME_KEY{ u"displayName" };

  /// @brief Field END_TIMESTAMP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString END_TIMESTAMP_KEY{ u"endTimestamp" };

  /// @brief Field ITEM_KEYS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ITEM_KEYS_KEY{ u"itemKeys" };

  /// @brief Field PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIMARY_KEY{ u"bundleKey" };

  /// @brief Field START_TIMESTAMP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString START_TIMESTAMP_KEY{ u"startTimestamp" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BundlesDatabase, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BundlesDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BundlesDatabase*, "", "BundlesDatabase");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundlesDatabase___GetBundleData_d__8, "", "BundlesDatabase/<GetBundleData>d__8");
