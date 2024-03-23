#pragma once
#include "Amazon/Runtime/zzzz__IAsyncResponseContext_def.hpp"
#include "Amazon/Runtime/zzzz__IResponseContext_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::IResponseContext"
constexpr Amazon::Runtime::IAsyncResponseContext::operator ::Amazon::Runtime::IResponseContext*() noexcept {
  return static_cast<::Amazon::Runtime::IResponseContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IResponseContext"
constexpr ::Amazon::Runtime::IResponseContext* Amazon::Runtime::IAsyncResponseContext::i___Amazon__Runtime__IResponseContext() noexcept {
  return static_cast<::Amazon::Runtime::IResponseContext*>(static_cast<void*>(this));
}
