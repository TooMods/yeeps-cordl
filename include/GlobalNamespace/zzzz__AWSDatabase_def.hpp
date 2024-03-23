#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateItemResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__InvokeResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AWSDatabase)
namespace Amazon::DynamoDBv2::Model {
class AttributeValueUpdate;
}
namespace Amazon::DynamoDBv2::Model {
class AttributeValue;
}
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class GetItemResponse;
}
namespace Amazon::DynamoDBv2::Model {
class QueryResponse;
}
namespace Amazon::DynamoDBv2::Model {
class UpdateItemResponse;
}
namespace Amazon::DynamoDBv2 {
class AmazonDynamoDBClient;
}
namespace Amazon::Lambda::Model {
class InvokeResponse;
}
namespace Amazon::Lambda {
class AmazonLambdaClient;
}
namespace Amazon {
class RegionEndpoint;
}
namespace GlobalNamespace {
struct __AWSDatabase__BatchDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__QueryDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__UpdateDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase___BatchGetItems_d__27;
}
namespace GlobalNamespace {
struct __AWSDatabase___GetItem_d__24;
}
namespace GlobalNamespace {
struct __AWSDatabase___GetItem_d__25;
}
namespace GlobalNamespace {
struct __AWSDatabase___InvokeLambda_d__18;
}
namespace GlobalNamespace {
struct __AWSDatabase___QueryItems_d__29;
}
namespace GlobalNamespace {
struct __AWSDatabase___QueryItems_d__30;
}
namespace GlobalNamespace {
struct __AWSDatabase___QueryItems_d__31;
}
namespace GlobalNamespace {
struct __AWSDatabase___UpdateItem_d__28;
}
namespace GlobalNamespace {
struct __AWSDatabase___WaitForSeconds_d__32;
}
namespace OVRSimpleJSON {
class JSONArray;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class AWSDatabase;
}
namespace GlobalNamespace {
struct __AWSDatabase__BatchDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__QueryDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__UpdateDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase___BatchGetItems_d__27;
}
namespace GlobalNamespace {
struct __AWSDatabase___GetItem_d__24;
}
namespace GlobalNamespace {
struct __AWSDatabase___GetItem_d__25;
}
namespace GlobalNamespace {
struct __AWSDatabase___InvokeLambda_d__18;
}
namespace GlobalNamespace {
struct __AWSDatabase___QueryItems_d__29;
}
namespace GlobalNamespace {
struct __AWSDatabase___QueryItems_d__30;
}
namespace GlobalNamespace {
struct __AWSDatabase___QueryItems_d__31;
}
namespace GlobalNamespace {
struct __AWSDatabase___UpdateItem_d__28;
}
namespace GlobalNamespace {
struct __AWSDatabase___WaitForSeconds_d__32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AWSDatabase);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase__BatchDynamoResponse);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase__DynamoResponse);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase__LambdaResponse);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase__QueryDynamoResponse);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___GetItem_d__24);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___GetItem_d__25);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___QueryItems_d__29);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___QueryItems_d__30);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___QueryItems_d__31);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28);
MARK_VAL_T(::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32);
// Type: ::LambdaResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::LambdaResponse
struct CORDL_TYPE __AWSDatabase__LambdaResponse {
public:
  // Declarations
  __declspec(property(get = get_data))::OVRSimpleJSON::JSONNode* data;

  /// @brief Method ContainsKey, addr 0x15900c4, size 0x68, virtual false, abstract: false, final false
  inline bool ContainsKey(::StringW key);

  /// @brief Method FailureResponse, addr 0x15900b8, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__LambdaResponse FailureResponse(::StringW errTypeRaw, ::StringW alternateError);

  /// @brief Method GetColor, addr 0x1590214, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW key, ::UnityEngine::Color defaultColor);

  /// @brief Method GetDate, addr 0x159031c, size 0xcc, virtual false, abstract: false, final false
  inline ::System::DateTime GetDate(::StringW key, ::System::DateTime defaultValue);

  /// @brief Method GetErrorMessage, addr 0x15861f4, size 0x1f0, virtual false, abstract: false, final false
  inline ::StringW GetErrorMessage();

  /// @brief Method GetInt, addr 0x159012c, size 0x68, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetIntAsBool, addr 0x1590194, size 0x1c, virtual false, abstract: false, final false
  inline bool GetIntAsBool(::StringW key);

  /// @brief Method GetIntList, addr 0x1590680, size 0x190, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* GetIntList(::StringW key);

  /// @brief Method GetString, addr 0x15901b0, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Method GetStringList, addr 0x15904f4, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetStringList(::StringW key);

  /// @brief Method TryGetDate, addr 0x15903e8, size 0x10c, virtual false, abstract: false, final false
  inline bool TryGetDate(::StringW key, ByRef<::System::DateTime> date);

  /// @brief Method TryGetSubData, addr 0x1590810, size 0x104, virtual false, abstract: false, final false
  inline bool TryGetSubData(::StringW key, ByRef<::GlobalNamespace::__AWSDatabase__LambdaResponse> map);

  /// @brief Method .ctor, addr 0x158fea8, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::OVRSimpleJSON::JSONNode* responseData);

  /// @brief Method .ctor, addr 0x158fe94, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool success, ::StringW errTypeRaw, ::OVRSimpleJSON::JSONNode* body, ::StringW alternateError);

  /// @brief Method get_data, addr 0x158fe18, size 0x7c, virtual false, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* get_data();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase__LambdaResponse();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "body", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: None }, CppParam { name: "alternateError", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __AWSDatabase__LambdaResponse(bool success, ::StringW errTypeRaw, ::OVRSimpleJSON::JSONNode* body, ::StringW alternateError) noexcept;

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field errTypeRaw, offset: 0x8, size: 0x8, def value: None
  ::StringW errTypeRaw;

  /// @brief Field body, offset: 0x10, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* body;

  /// @brief Field alternateError, offset: 0x18, size: 0x8, def value: None
  ::StringW alternateError;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase__LambdaResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__LambdaResponse, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__LambdaResponse, errTypeRaw) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__LambdaResponse, body) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__LambdaResponse, alternateError) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DynamoResponse
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::DynamoResponse
struct CORDL_TYPE __AWSDatabase__DynamoResponse {
public:
  // Declarations
  /// @brief Method ContainsKey, addr 0x15909c0, size 0x58, virtual false, abstract: false, final false
  inline bool ContainsKey(::StringW key);

  /// @brief Method ExtractKeysFromSubData, addr 0x1591634, size 0x23c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ExtractKeysFromSubData(::StringW key);

  /// @brief Method FailureResponse, addr 0x1590924, size 0x9c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__DynamoResponse FailureResponse(::StringW errTypeRaw);

  /// @brief Method GetAttributes, addr 0x1591870, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* GetAttributes();

  /// @brief Method GetColor, addr 0x1590b48, size 0x118, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor(::StringW key, ::UnityEngine::Color defaultColor);

  /// @brief Method GetDate, addr 0x1590c60, size 0xd0, virtual false, abstract: false, final false
  inline ::System::DateTime GetDate(::StringW key, ::System::DateTime defaultValue);

  /// @brief Method GetInt, addr 0x1590a18, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetIntAsBool, addr 0x1590aa8, size 0x1c, virtual false, abstract: false, final false
  inline bool GetIntAsBool(::StringW key);

  /// @brief Method GetIntList, addr 0x1591084, size 0x24c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* GetIntList(::StringW key);

  /// @brief Method GetString, addr 0x1590ac4, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Method GetStringList, addr 0x1590e40, size 0x244, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetStringList(::StringW key);

  /// @brief Method GetSubDataList, addr 0x15912d0, size 0x290, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetSubDataList(::StringW key);

  /// @brief Method TryGetDate, addr 0x1590d30, size 0x110, virtual false, abstract: false, final false
  inline bool TryGetDate(::StringW key, ByRef<::System::DateTime> date);

  /// @brief Method TryGetSubData, addr 0x1591560, size 0xd4, virtual false, abstract: false, final false
  inline bool TryGetSubData(::StringW key, ByRef<::GlobalNamespace::__AWSDatabase__DynamoResponse> map);

  /// @brief Method .ctor, addr 0x1590914, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* attributes);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase__DynamoResponse();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "attributes", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: None }]
  constexpr __AWSDatabase__DynamoResponse(bool success, ::StringW errTypeRaw,
                                          ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* attributes) noexcept;

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field errTypeRaw, offset: 0x8, size: 0x8, def value: None
  ::StringW errTypeRaw;

  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* attributes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase__DynamoResponse, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__DynamoResponse, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__DynamoResponse, errTypeRaw) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__DynamoResponse, attributes) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BatchDynamoResponse
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::BatchDynamoResponse
struct CORDL_TYPE __AWSDatabase__BatchDynamoResponse {
public:
  // Declarations
  /// @brief Method FailureResponse, addr 0x1591888, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse FailureResponse(::StringW errTypeRaw);

  /// @brief Method .ctor, addr 0x1591878, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool success, ::StringW errTypeRaw, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase__BatchDynamoResponse();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "responses", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__AWSDatabase__DynamoResponse>*", modifiers: "", def_value: None }]
  constexpr __AWSDatabase__BatchDynamoResponse(bool success, ::StringW errTypeRaw,
                                               ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses) noexcept;

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field errTypeRaw, offset: 0x8, size: 0x8, def value: None
  ::StringW errTypeRaw;

  /// @brief Field responses, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__BatchDynamoResponse, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__BatchDynamoResponse, errTypeRaw) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__BatchDynamoResponse, responses) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UpdateDynamoResponse
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::UpdateDynamoResponse
struct CORDL_TYPE __AWSDatabase__UpdateDynamoResponse {
public:
  // Declarations
  /// @brief Method FailureResponse, addr 0x159191c, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse FailureResponse(::StringW errTypeRaw);

  /// @brief Method .ctor, addr 0x159190c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool success, ::StringW errTypeRaw);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase__UpdateDynamoResponse();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __AWSDatabase__UpdateDynamoResponse(bool success, ::StringW errTypeRaw) noexcept;

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field errTypeRaw, offset: 0x8, size: 0x8, def value: None
  ::StringW errTypeRaw;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse, errTypeRaw) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::QueryDynamoResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::QueryDynamoResponse
struct CORDL_TYPE __AWSDatabase__QueryDynamoResponse {
public:
  // Declarations
  /// @brief Method EmptyResponse, addr 0x15919c0, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse EmptyResponse();

  /// @brief Method FailureResponse, addr 0x159193c, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse FailureResponse(::StringW errTypeRaw);

  /// @brief Method .ctor, addr 0x1591928, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool success, ::StringW errTypeRaw, ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses,
                    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* lastEvaluatedKey);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase__QueryDynamoResponse();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "errTypeRaw", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "responses", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>*", modifiers: "", def_value: None }, CppParam { name: "lastEvaluatedKey", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: None }]
  constexpr __AWSDatabase__QueryDynamoResponse(bool success, ::StringW errTypeRaw, ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses,
                                               ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* lastEvaluatedKey) noexcept;

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field errTypeRaw, offset: 0x8, size: 0x8, def value: None
  ::StringW errTypeRaw;

  /// @brief Field responses, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* responses;

  /// @brief Field lastEvaluatedKey, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* lastEvaluatedKey;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, errTypeRaw) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, responses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, lastEvaluatedKey) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InvokeLambda>d__18
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<InvokeLambda>d__18
struct CORDL_TYPE __AWSDatabase___InvokeLambda_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1591a40, size 0xbb8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x15925f8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___InvokeLambda_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }, CppParam { name: "endpoint", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "inputJSON", ty: "::OVRSimpleJSON::JSONNode*", modifiers: "", def_value: None }, CppParam { name: "_lambdaClient_5__2", ty:
  // "::Amazon::Lambda::AmazonLambdaClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::Lambda::Model::InvokeResponse*>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___InvokeLambda_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __t__builder,
                                               ::StringW endpoint, ::OVRSimpleJSON::JSONNode* inputJSON, ::Amazon::Lambda::AmazonLambdaClient* _lambdaClient_5__2,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::Lambda::Model::InvokeResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __t__builder;

  /// @brief Field endpoint, offset: 0x20, size: 0x8, def value: None
  ::StringW endpoint;

  /// @brief Field inputJSON, offset: 0x28, size: 0x8, def value: None
  ::OVRSimpleJSON::JSONNode* inputJSON;

  /// @brief Field <lambdaClient>5__2, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Lambda::AmazonLambdaClient* _lambdaClient_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::Lambda::Model::InvokeResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, endpoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, inputJSON) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, _lambdaClient_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetItem>d__24
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<GetItem>d__24
struct CORDL_TYPE __AWSDatabase___GetItem_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1592650, size 0x2fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x159294c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___GetItem_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "tableName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyValue", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "attribute", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___GetItem_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                          ::StringW tableName, ::StringW keyName, ::StringW keyValue, ::StringW attribute,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field keyName, offset: 0x28, size: 0x8, def value: None
  ::StringW keyName;

  /// @brief Field keyValue, offset: 0x30, size: 0x8, def value: None
  ::StringW keyValue;

  /// @brief Field attribute, offset: 0x38, size: 0x8, def value: None
  ::StringW attribute;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___GetItem_d__24, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, tableName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, keyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, keyValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, attribute) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__24, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetItem>d__25
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<GetItem>d__25
struct CORDL_TYPE __AWSDatabase___GetItem_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x15929a4, size 0x6fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x15930a0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___GetItem_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "tableName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyValue", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "_dynamoClient_5__2", ty:
  // "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::GetItemResponse*>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___GetItem_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                          ::StringW tableName, ::StringW keyName, ::StringW keyValue, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                          ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::GetItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field keyName, offset: 0x28, size: 0x8, def value: None
  ::StringW keyName;

  /// @brief Field keyValue, offset: 0x30, size: 0x8, def value: None
  ::StringW keyValue;

  /// @brief Field attributesToGet, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* attributesToGet;

  /// @brief Field <dynamoClient>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::GetItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___GetItem_d__25, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, tableName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, keyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, keyValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, attributesToGet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, _dynamoClient_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___GetItem_d__25, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<BatchGetItems>d__27
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<BatchGetItems>d__27
struct CORDL_TYPE __AWSDatabase___BatchGetItems_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x15930f8, size 0xf58, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1594050, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___BatchGetItems_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "keyValues", ty:
  // "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "tableName", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_dynamoClient_5__2", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___BatchGetItems_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder,
                                                ::System::Collections::Generic::List_1<::StringW>* keyValues, ::StringW keyName, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                ::StringW tableName, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder;

  /// @brief Field keyValues, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* keyValues;

  /// @brief Field keyName, offset: 0x28, size: 0x8, def value: None
  ::StringW keyName;

  /// @brief Field attributesToGet, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* attributesToGet;

  /// @brief Field tableName, offset: 0x38, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field <dynamoClient>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, keyValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, keyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, attributesToGet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, tableName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, _dynamoClient_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateItem>d__28
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<UpdateItem>d__28
struct CORDL_TYPE __AWSDatabase___UpdateItem_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x15940a8, size 0x690, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1594738, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___UpdateItem_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "tableName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyValue", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "updates", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>*", modifiers: "", def_value: None },
  // CppParam { name: "_dynamoClient_5__2", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___UpdateItem_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder,
                                             ::StringW tableName, ::StringW keyName, ::StringW keyValue,
                                             ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates,
                                             ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder;

  /// @brief Field tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field keyName, offset: 0x28, size: 0x8, def value: None
  ::StringW keyName;

  /// @brief Field keyValue, offset: 0x30, size: 0x8, def value: None
  ::StringW keyValue;

  /// @brief Field updates, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates;

  /// @brief Field <dynamoClient>5__2, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::UpdateItemResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, tableName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, keyName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, keyValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, updates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, _dynamoClient_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<QueryItems>d__29
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<QueryItems>d__29
struct CORDL_TYPE __AWSDatabase___QueryItems_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1594790, size 0x2a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1594a30, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___QueryItems_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "tableName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "indexName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sortDescending", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "partitionKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "partitionValue", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startKey", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___QueryItems_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder,
                                             ::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKey, ::StringW partitionValue, int32_t limit,
                                             ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder;

  /// @brief Field tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field indexName, offset: 0x28, size: 0x8, def value: None
  ::StringW indexName;

  /// @brief Field sortDescending, offset: 0x30, size: 0x1, def value: None
  bool sortDescending;

  /// @brief Field partitionKey, offset: 0x38, size: 0x8, def value: None
  ::StringW partitionKey;

  /// @brief Field partitionValue, offset: 0x40, size: 0x8, def value: None
  ::StringW partitionValue;

  /// @brief Field limit, offset: 0x48, size: 0x4, def value: None
  int32_t limit;

  /// @brief Field startKey, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___QueryItems_d__29, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, tableName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, indexName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, sortDescending) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, partitionKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, partitionValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, limit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, startKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, __u__1) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<QueryItems>d__30
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<QueryItems>d__30
struct CORDL_TYPE __AWSDatabase___QueryItems_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1594a88, size 0x2ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1594d34, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___QueryItems_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "tableName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "indexName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sortDescending", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "partitionKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "partitionValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "limit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startKey", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___QueryItems_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder,
                                             ::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKey, int32_t partitionValue, int32_t limit,
                                             ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder;

  /// @brief Field tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field indexName, offset: 0x28, size: 0x8, def value: None
  ::StringW indexName;

  /// @brief Field sortDescending, offset: 0x30, size: 0x1, def value: None
  bool sortDescending;

  /// @brief Field partitionKey, offset: 0x38, size: 0x8, def value: None
  ::StringW partitionKey;

  /// @brief Field partitionValue, offset: 0x40, size: 0x4, def value: None
  int32_t partitionValue;

  /// @brief Field limit, offset: 0x44, size: 0x4, def value: None
  int32_t limit;

  /// @brief Field startKey, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___QueryItems_d__30, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, tableName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, indexName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, sortDescending) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, partitionKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, partitionValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, limit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, startKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<QueryItems>d__31
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<QueryItems>d__31
struct CORDL_TYPE __AWSDatabase___QueryItems_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1594d8c, size 0x9bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1595748, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___QueryItems_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "tableName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "indexName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sortDescending", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "partitionKeyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "partitionValue", ty: "::Amazon::DynamoDBv2::Model::AttributeValue*",
  // modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startKey", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::Model::AttributeValue*>*", modifiers: "", def_value: None }, CppParam { name: "_dynamoClient_5__2", ty:
  // "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::QueryResponse*>", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___QueryItems_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder,
                                             ::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKeyName, ::Amazon::DynamoDBv2::Model::AttributeValue* partitionValue,
                                             int32_t limit, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey,
                                             ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::QueryResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse> __t__builder;

  /// @brief Field tableName, offset: 0x20, size: 0x8, def value: None
  ::StringW tableName;

  /// @brief Field indexName, offset: 0x28, size: 0x8, def value: None
  ::StringW indexName;

  /// @brief Field sortDescending, offset: 0x30, size: 0x1, def value: None
  bool sortDescending;

  /// @brief Field partitionKeyName, offset: 0x38, size: 0x8, def value: None
  ::StringW partitionKeyName;

  /// @brief Field partitionValue, offset: 0x40, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::Model::AttributeValue* partitionValue;

  /// @brief Field limit, offset: 0x48, size: 0x4, def value: None
  int32_t limit;

  /// @brief Field startKey, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey;

  /// @brief Field <dynamoClient>5__2, offset: 0x58, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _dynamoClient_5__2;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Amazon::DynamoDBv2::Model::QueryResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___QueryItems_d__31, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, tableName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, indexName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, sortDescending) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, partitionKeyName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, partitionValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, limit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, startKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, _dynamoClient_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, __u__1) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<WaitForSeconds>d__32
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AWSDatabase::<WaitForSeconds>d__32
struct CORDL_TYPE __AWSDatabase___WaitForSeconds_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x15957a0, size 0x1f0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1595990, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSDatabase___WaitForSeconds_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "seconds", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AWSDatabase___WaitForSeconds_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, float_t seconds,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field seconds, offset: 0x20, size: 0x4, def value: None
  float_t seconds;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32, seconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AWSDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AWSDatabase*
class CORDL_TYPE AWSDatabase : public ::System::Object {
public:
  // Declarations
  using BatchDynamoResponse = ::GlobalNamespace::__AWSDatabase__BatchDynamoResponse;

  using DynamoResponse = ::GlobalNamespace::__AWSDatabase__DynamoResponse;

  using LambdaResponse = ::GlobalNamespace::__AWSDatabase__LambdaResponse;

  using QueryDynamoResponse = ::GlobalNamespace::__AWSDatabase__QueryDynamoResponse;

  using UpdateDynamoResponse = ::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse;

  using _BatchGetItems_d__27 = ::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27;

  using _GetItem_d__24 = ::GlobalNamespace::__AWSDatabase___GetItem_d__24;

  using _GetItem_d__25 = ::GlobalNamespace::__AWSDatabase___GetItem_d__25;

  using _InvokeLambda_d__18 = ::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18;

  using _QueryItems_d__29 = ::GlobalNamespace::__AWSDatabase___QueryItems_d__29;

  using _QueryItems_d__30 = ::GlobalNamespace::__AWSDatabase___QueryItems_d__30;

  using _QueryItems_d__31 = ::GlobalNamespace::__AWSDatabase___QueryItems_d__31;

  using _UpdateItem_d__28 = ::GlobalNamespace::__AWSDatabase___UpdateItem_d__28;

  using _WaitForSeconds_d__32 = ::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32;

  /// @brief Field CREDENTIALS_MOBILE_FILE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREDENTIALS_MOBILE_FILE, put = setStaticF_CREDENTIALS_MOBILE_FILE))::StringW CREDENTIALS_MOBILE_FILE;

  /// @brief Field CREDENTIALS_PC_FILE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREDENTIALS_PC_FILE, put = setStaticF_CREDENTIALS_PC_FILE))::StringW CREDENTIALS_PC_FILE;

  /// @brief Field CREDENTIALS_QUEST_FILE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREDENTIALS_QUEST_FILE, put = setStaticF_CREDENTIALS_QUEST_FILE))::StringW CREDENTIALS_QUEST_FILE;

  /// @brief Field CREDENTIALS_UTILITY_FILE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CREDENTIALS_UTILITY_FILE, put = setStaticF_CREDENTIALS_UTILITY_FILE))::StringW CREDENTIALS_UTILITY_FILE;

  /// @brief Field PC_VALIDATED_FUNCTIONS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PC_VALIDATED_FUNCTIONS, put = setStaticF_PC_VALIDATED_FUNCTIONS))::System::Collections::Generic::List_1<::StringW>* PC_VALIDATED_FUNCTIONS;

  /// @brief Field PHONE_VALIDATED_FUNCTIONS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PHONE_VALIDATED_FUNCTIONS, put = setStaticF_PHONE_VALIDATED_FUNCTIONS))::System::Collections::Generic::List_1<::StringW>* PHONE_VALIDATED_FUNCTIONS;

  /// @brief Field credentials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_credentials, put = setStaticF_credentials))::ArrayW<::StringW, ::Array<::StringW>*> credentials;

  /// @brief Field initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_initialized, put = setStaticF_initialized)) bool initialized;

  /// @brief Field isMissingCredentials, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isMissingCredentials, put = setStaticF_isMissingCredentials)) bool isMissingCredentials;

  /// @brief Field region, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_region, put = setStaticF_region))::Amazon::RegionEndpoint* region;

  /// @brief Method BatchGetItems, addr 0x158e804, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>*
  BatchGetItems(::StringW tableName, ::StringW keyName, ::System::Collections::Generic::List_1<::StringW>* keyValues, ::System::Collections::Generic::List_1<::StringW>* attributesToGet);

  /// @brief Method ConvertColorToHex, addr 0x158f470, size 0x70, virtual false, abstract: false, final false
  static inline int32_t ConvertColorToHex(::UnityEngine::Color color);

  /// @brief Method ConvertHexToColor, addr 0x158f4e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertHexToColor(int32_t hex);

  /// @brief Method CreateDynamoClient, addr 0x158e42c, size 0x1a8, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::AmazonDynamoDBClient* CreateDynamoClient();

  /// @brief Method CreateLambdaClient, addr 0x158e284, size 0x1a8, virtual false, abstract: false, final false
  static inline ::Amazon::Lambda::AmazonLambdaClient* CreateLambdaClient();

  /// @brief Method GenerateJSONArray, addr 0x158f37c, size 0xf4, virtual false, abstract: false, final false
  static inline ::OVRSimpleJSON::JSONArray* GenerateJSONArray(::ArrayW<int32_t, ::Array<int32_t>*> intArray);

  /// @brief Method GenerateJSONArray, addr 0x158f1a8, size 0x1d4, virtual false, abstract: false, final false
  static inline ::OVRSimpleJSON::JSONArray* GenerateJSONArray(::System::Collections::Generic::List_1<int32_t>* intList);

  /// @brief Method GenerateJSONArray, addr 0x158f0b4, size 0xf4, virtual false, abstract: false, final false
  static inline ::OVRSimpleJSON::JSONArray* GenerateJSONArray(::ArrayW<::StringW, ::Array<::StringW>*> stringArray);

  /// @brief Method GenerateJSONArray, addr 0x158eef8, size 0x1bc, virtual false, abstract: false, final false
  static inline ::OVRSimpleJSON::JSONArray* GenerateJSONArray(::System::Collections::Generic::List_1<::StringW>* stringList);

  /// @brief Method GetCredentials, addr 0x158def8, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCredentials(::StringW filePath);

  /// @brief Method GetItem, addr 0x158e5d4, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetItem(::StringW tableName, ::StringW keyName, ::StringW keyValue, ::StringW attribute);

  /// @brief Method GetItem, addr 0x158e6ec, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetItem(::StringW tableName, ::StringW keyName, ::StringW keyValue,
                                                                                                              ::System::Collections::Generic::List_1<::StringW>* attributesToGet);

  /// @brief Method InitializeAsUtility, addr 0x158e1d8, size 0xac, virtual false, abstract: false, final false
  static inline void InitializeAsUtility();

  /// @brief Method IntUpdate, addr 0x158f5ec, size 0xdc, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* IntUpdate(int32_t value);

  /// @brief Method InvokeLambda, addr 0x15860f4, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>* InvokeLambda(::StringW endpoint, ::OVRSimpleJSON::JSONNode* inputJSON);

  /// @brief Method QueryItems, addr 0x158ea34, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*
  QueryItems(::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKey, ::StringW partitionValue, int32_t limit,
             ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey);

  /// @brief Method QueryItems, addr 0x158eb74, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*
  QueryItems(::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKey, int32_t partitionValue, int32_t limit,
             ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey);

  /// @brief Method QueryItems, addr 0x158ecb8, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__QueryDynamoResponse>*
  QueryItems(::StringW tableName, ::StringW indexName, bool sortDescending, ::StringW partitionKeyName, ::Amazon::DynamoDBv2::Model::AttributeValue* partitionValue, int32_t limit,
             ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* startKey);

  /// @brief Method StringListAppendUpdate, addr 0x158f6c8, size 0x230, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* StringListAppendUpdate(::System::Collections::Generic::List_1<::StringW>* values);

  /// @brief Method StringUpdate, addr 0x158f51c, size 0xd0, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate* StringUpdate(::StringW value);

  /// @brief Method TryInitialize, addr 0x158e02c, size 0x1ac, virtual false, abstract: false, final false
  static inline void TryInitialize();

  /// @brief Method UpdateItem, addr 0x158e91c, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>*
  UpdateItem(::StringW tableName, ::StringW keyName, ::StringW keyValue, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*>* updates);

  /// @brief Method WaitForSeconds, addr 0x158edfc, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<bool>* WaitForSeconds(float_t seconds);

  static inline ::StringW getStaticF_CREDENTIALS_MOBILE_FILE();

  static inline ::StringW getStaticF_CREDENTIALS_PC_FILE();

  static inline ::StringW getStaticF_CREDENTIALS_QUEST_FILE();

  static inline ::StringW getStaticF_CREDENTIALS_UTILITY_FILE();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_PC_VALIDATED_FUNCTIONS();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_PHONE_VALIDATED_FUNCTIONS();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_credentials();

  static inline bool getStaticF_initialized();

  static inline bool getStaticF_isMissingCredentials();

  static inline ::Amazon::RegionEndpoint* getStaticF_region();

  /// @brief Method get_CLIENT_APPLICATION_VERSION, addr 0x158dea8, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_CLIENT_APPLICATION_VERSION();

  static inline void setStaticF_CREDENTIALS_MOBILE_FILE(::StringW value);

  static inline void setStaticF_CREDENTIALS_PC_FILE(::StringW value);

  static inline void setStaticF_CREDENTIALS_QUEST_FILE(::StringW value);

  static inline void setStaticF_CREDENTIALS_UTILITY_FILE(::StringW value);

  static inline void setStaticF_PC_VALIDATED_FUNCTIONS(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_PHONE_VALIDATED_FUNCTIONS(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_credentials(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_initialized(bool value);

  static inline void setStaticF_isMissingCredentials(bool value);

  static inline void setStaticF_region(::Amazon::RegionEndpoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSDatabase(AWSDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSDatabase(AWSDatabase const&) = delete;

  /// @brief Field APP_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString APP_PREFIX{ u"G2_" };

  /// @brief Field MAX_BATCH_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t MAX_BATCH_SIZE{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AWSDatabase, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AWSDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AWSDatabase*, "", "AWSDatabase");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase__BatchDynamoResponse, "", "AWSDatabase/BatchDynamoResponse");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase__DynamoResponse, "", "AWSDatabase/DynamoResponse");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase__LambdaResponse, "", "AWSDatabase/LambdaResponse");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase__QueryDynamoResponse, "", "AWSDatabase/QueryDynamoResponse");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse, "", "AWSDatabase/UpdateDynamoResponse");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___BatchGetItems_d__27, "", "AWSDatabase/<BatchGetItems>d__27");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___GetItem_d__24, "", "AWSDatabase/<GetItem>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___GetItem_d__25, "", "AWSDatabase/<GetItem>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___InvokeLambda_d__18, "", "AWSDatabase/<InvokeLambda>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___QueryItems_d__29, "", "AWSDatabase/<QueryItems>d__29");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___QueryItems_d__30, "", "AWSDatabase/<QueryItems>d__30");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___QueryItems_d__31, "", "AWSDatabase/<QueryItems>d__31");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___UpdateItem_d__28, "", "AWSDatabase/<UpdateItem>d__28");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AWSDatabase___WaitForSeconds_d__32, "", "AWSDatabase/<WaitForSeconds>d__32");
