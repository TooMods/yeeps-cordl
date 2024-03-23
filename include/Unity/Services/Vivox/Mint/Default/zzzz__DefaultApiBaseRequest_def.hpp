#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultApiBaseRequest)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class Stream;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Default {
class DefaultApiBaseRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Default::DefaultApiBaseRequest);
// Type: Unity.Services.Vivox.Mint.Default::DefaultApiBaseRequest
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Default {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Default::DefaultApiBaseRequest*
class CORDL_TYPE DefaultApiBaseRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field JsonRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_JsonRegex, put = setStaticF_JsonRegex))::System::Text::RegularExpressions::Regex* JsonRegex;

  /// @brief Method AddParamsToQueryParams, addr 0x1707fac, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AddParamsToQueryParams(::System::Collections::Generic::List_1<::StringW>* queryParams, ::StringW key, ::StringW value);

  /// @brief Method AddParamsToQueryParams, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::List_1<::StringW>* AddParamsToQueryParams(::System::Collections::Generic::List_1<::StringW>* queryParams, ::StringW key, T value);

  /// @brief Method AddParamsToQueryParams, addr 0x17080a4, size 0x3a0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AddParamsToQueryParams(::System::Collections::Generic::List_1<::StringW>* queryParams, ::StringW key,
                                                                                   ::System::Collections::Generic::List_1<::StringW>* values, ::StringW style, bool explode);

  /// @brief Method AddParamsToQueryParams, addr 0x1708444, size 0x260, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* AddParamsToQueryParams(::System::Collections::Generic::List_1<::StringW>* queryParams,
                                                                                   ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* modelVars);

  /// @brief Method ConstructBody, addr 0x1708a48, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConstructBody(::System::Object* o);

  /// @brief Method ConstructBody, addr 0x1708a18, size 0x30, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConstructBody(::StringW s);

  /// @brief Method ConstructBody, addr 0x1708850, size 0x1c8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConstructBody(::System::IO::Stream* stream);

  /// @brief Method GenerateAcceptHeader, addr 0x1708a90, size 0xd8, virtual false, abstract: false, final false
  inline ::StringW GenerateAcceptHeader(::ArrayW<::StringW, ::Array<::StringW>*> accepts);

  /// @brief Method GenerateContentTypeHeader, addr 0x1708b68, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW GenerateContentTypeHeader(::ArrayW<::StringW, ::Array<::StringW>*> contentTypes);

  /// @brief Method GenerateMultipartFormFileSection, addr 0x1708c60, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::IMultipartFormSection* GenerateMultipartFormFileSection(::StringW paramName, ::System::IO::FileStream* stream, ::StringW contentType);

  /// @brief Method GenerateMultipartFormFileSection, addr 0x1708d6c, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::IMultipartFormSection* GenerateMultipartFormFileSection(::StringW paramName, ::System::IO::Stream* stream, ::StringW contentType);

  /// @brief Method GetFileName, addr 0x1708d14, size 0x58, virtual false, abstract: false, final false
  inline ::StringW GetFileName(::StringW filePath);

  /// @brief Method GetPathParamString, addr 0x17086a4, size 0x1ac, virtual false, abstract: false, final false
  inline ::StringW GetPathParamString(::System::Collections::Generic::List_1<::StringW>* pathParam);

  static inline ::Unity::Services::Vivox::Mint::Default::DefaultApiBaseRequest* New_ctor();

  /// @brief Method .ctor, addr 0x1708e20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_JsonRegex();

  static inline void setStaticF_JsonRegex(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultApiBaseRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultApiBaseRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultApiBaseRequest(DefaultApiBaseRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultApiBaseRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultApiBaseRequest(DefaultApiBaseRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Default::DefaultApiBaseRequest, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Default
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Default::DefaultApiBaseRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Default::DefaultApiBaseRequest*, "Unity.Services.Vivox.Mint.Default", "DefaultApiBaseRequest");
